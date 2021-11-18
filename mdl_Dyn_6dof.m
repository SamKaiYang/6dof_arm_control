% mdl_Dyn_5dof.m
%% UR5 robot
deg = pi/180;

% 'm'
mass = [3.7000, 8.3930, 2.33, 1.2190, 1.2190, 0.1897];

% 'r'
center_of_mass = [
      0,-0.02561, 0.00193
      0.2125, 0, 0.11336
      0.15, 0, 0.0265
      0, -0.0018, 0.01634
      0, -0.0018, 0.01634
      0, 0, -0.001159];
% I => ixx , iyy , izz 
inertial = [
      0.010267495893, 0.010267495893, 0.00666
      0.22689067591, 0.22689067591, 0.0151074
      0.049443313556, 0.049443313556, 0.004095
      0.111172755531, 0.111172755531, 0.21942
      0.111172755531, 0.111172755531, 0.21942
      0.0171364731454, 0.0171364731454, 0.033822
];
% robot length values (metres)
% theta    d        a        alpha     offset
L(1)=Link([0       0.08916    0        pi/2      0     ],'standard'); 
L(1).m = 3.7000; %質心
L(1).r = [0,-0.02561, 0.00193]; % 鏈接 COG wrt 鏈接坐標系 3x1
L(1).I = [0.010267495893, 0.010267495893, 0.00666, 0, 0, 0];% 鏈接慣性矩陣，對稱 3x3，關於鏈接 COG。
L(1).G = 100; %齒輪比
L(1).Jm = 0.0; % 執行器：電機慣量（電機參考） 

L(2)=Link([0       0        0.425     0         0     ],'standard');
L(2).m = 8.3930;
L(2).r = [0.2125, 0, 0.11336];
L(2).I = [0.22689067591, 0.22689067591, 0.0151074, 0, 0, 0];
L(2).G = 100;
L(2).Jm = 0.0;

L(3)=Link([0       0        0.39225   0         0     ],'standard');
L(3).m = 2.33;
L(3).r = [0.15, 0, 0.0265];
L(3).I = [0.049443313556, 0.049443313556, 0.004095, 0, 0, 0];
L(3).G = 100;
L(3).Jm = 0.0;

L(4)=Link([0       0.10915   0        pi/2      0     ],'standard');
L(4).m = 1.2190;
L(4).r = [0, -0.0018, 0.01634];
L(4).I = [0.111172755531, 0.111172755531, 0.21942, 0, 0, 0];
L(4).G = 100;
L(4).Jm = 0.0;

L(5)=Link([0       0.09456    0        -pi/2     0     ],'standard');
L(5).m = 1.2190;
L(5).r = [0, -0.0018, 0.01634];
L(5).I = [0.111172755531, 0.111172755531, 0.21942, 0, 0, 0];
L(5).G = 100;
L(5).Jm = 0.0;

L(6)=Link([0       0.0823     0        0         0     ],'standard');
L(6).m = 0.1897;
L(6).r = [0, 0, -0.001159];
L(6).I = [0.0171364731454, 0.0171364731454, 0.033822, 0, 0, 0];
L(6).G = 100; 
L(6).Jm = 0.0;

% and build a serial link manipulator
% offsets from the table on page 4, "Mico" angles are the passed joint
% angles.  "DH Algo" are the result after adding the joint angle offset.
robot = SerialLink(L, ...
      'name', 'TECO ARM', 'manufacturer', 'Universal Robotics');

% add the mass data, no inertia available
% links = robot.links;
% for i=1:6
%    links(i).m = mass(i);
%    links(i).r = center_of_mass(i,:);
%    links(i).I = inertial(i,:);
% end
nargin = 0
% place the variables into the global workspace
if nargin == 1
   r = robot;
elseif nargin == 0
   assignin('caller', 'ur5', robot);
   assignin('caller', 'qz', [0 0 0 0 0 0]); % zero angles
   assignin('caller', 'qr', [180 0 0 0 90 0]*deg); % vertical pose as per Fig 2
end

robot.plot([0,0,0,0,0,0]);%輸出機器人模型，後面的六個角為輸出時的theta姿態
robot.display();
teach(robot);

% 对于空中机械臂，重力与坐标系方向一致，所以为正
% 这与matlab自带的重力系统相反，所以matlab自带函数为负
% 重力单位是m·s-2，也是N/kg,考虑到第二种意义，这里不改变数量值
% robot.gravity=[0;0;-9.81];


clear;
clc;
%%%%%%%%%%%%%%%%%%%%%%%%
%% 建立機器人模型
        % theta    d        a        alpha     offset
        %L1 = Link([0 0.2 1 pi/4 0],'standard'); %標準模式 L1 = Link([0 0.2 1
        %pi/4 0],'modify'); %改進模式
% mass = [3.7000, 8.3930, 2.33, 1.2190, 1.2190, 0.1897];

% center_of_mass = [
%         0,-0.02561, 0.00193
%         0.2125, 0, 0.11336
%         0.15, 0, 0.0265
%         0, -0.0018, 0.01634
%         0, -0.0018, 0.01634
%         0, 0, -0.001159];
%不寫默認標準模式 % robot length values (metres)
L1=Link([0       0.08916    0        pi/2      0     ],'standard'); 
L2=Link([0       0        0.425     0         0     ],'standard');
L3=Link([0       0        0.39225   0         0     ],'standard');
L4=Link([0       0.10915   0        pi/2      0     ],'standard');
L5=Link([0       0.09456    0        -pi/2     0     ],'standard');
L6=Link([0       0.0823     0        0         0     ],'standard');
robot = SerialLink([L1 L2 L3 L4 L5 L6],'name','tecoarm')%連接連桿，機器人命名
% robot.plot([0,0,0,0,0,0]);%輸出機器人模型，後面的六個角為輸出時的theta姿態
% robot.display();
% teach(robot);
% theta=[0,0,0,0,0,0];%指定關節角
% p=robot.fkine(theta)%fkine正解函數，根據我們給定的關節角theta，求解出末端位置p
% q=robot.ikine(p)%ikine逆解函數，根據我們給定的末端位置p，求解出關節角q
%% 軌跡規劃示意
% T1=transl(0.5,0,0);%根據給定始始點，得到起始點位置
% T2=transl(0,0.5,0);%根據給定終止點，得到終止點位置
% q1=robot.ikine(T1);%根據起始點位置，得到起始點關節角
% q2=robot.ikine(T2);%根據終止點位置，得到終止點關節角
% [q ,qd, qdd]=jtraj(q1,q2,50); %五次多項式軌跡，得到關節角度，角速度，角加速度，50為採樣數
% grid on
% T=robot.fkine(q);%根据插值，得到末端執行器的位置
% nT=T.T; plot3(squeeze(nT(1,4,:)),squeeze(nT(2,4,:)),squeeze(nT(3,4,:)));%輸出末端點軌跡
% hold on
% robot.plot(q);%動畫展示



%% UR5 robot
%  deg = pi/180;
%     
%     % robot length values (metres)
%     a = [0, -0.42500, -0.39225, 0, 0, 0]';
% 
%     d = [0.089459, 0, 0, 0.10915, 0.09465, 0.0823]';
% 
%     alpha = [1.570796327, 0, 0, 1.570796327, -1.570796327, 0]';
%     
%     theta = zeros(6,1);
%     
%     DH_ = [theta d a alpha];
% 
%     mass = [3.7000, 8.3930, 2.33, 1.2190, 1.2190, 0.1897];
% 
%     center_of_mass = [
%         0,-0.02561, 0.00193
%         0.2125, 0, 0.11336
%         0.15, 0, 0.0265
%         0, -0.0018, 0.01634
%         0, -0.0018, 0.01634
%         0, 0, -0.001159];
%     
%     % and build a serial link manipulator
%     
%     % offsets from the table on page 4, "Mico" angles are the passed joint
%     % angles.  "DH Algo" are the result after adding the joint angle offset.
% 
%     robot = SerialLink(DH_, ...
%         'name', 'UR5', 'manufacturer', 'Universal Robotics');
%     
%     % add the mass data, no inertia available
%     links = robot.links;
%     for i=1:6
%         links(i).m = mass(i);
%         links(i).r = center_of_mass(i,:);
%     end
% 
%     nargin = 0
%     % place the variables into the global workspace
%     if nargin == 1
%         r = robot;
%     elseif nargin == 0
%         assignin('caller', 'ur5', robot);
%         assignin('caller', 'qz', [0 0 0 0 0 0]); % zero angles
%         assignin('caller', 'qr', [180 0 0 0 90 0]*deg); % vertical pose as per Fig 2
%     end
%     robot.plot([0,0,0,0,0,0]);%輸出機器人模型，後面的六個角為輸出時的theta姿態
%     robot.display();
%     teach(robot);

% ur5_robot = importrobot('ur_description/urdf/ur5_robot.urdf');
% load exampleRobots.mat lbr
% lbr.DataFormat = 'row';
% lbr.Gravity = [0 0 -9.81];
% q = homeConfiguration(lbr);
% 
% show(lbr);
% showdetails(lbr);

[ur5_robot,info] = loadrobot('universalUR5','DataFormat','column','Gravity',[0 0 -9.81]);
% show(ur5_robot);
showdetails(ur5_robot);

open_system('simulink/robot_system_toolbox.slx')

initialConfig = homeConfiguration(ur5_robot);
% targetPosition = trvec2tform([0 0 0.8])
targetPosition = trvec2tform([0.6 -0.1 0.5])
% fext = externalForce(ur5_robot,'tool0',[0 0 0 0 0 50],initialConfig);
fext = externalForce(ur5_robot,'tool0',[0 0 0 0 0 50]);


% randConfig = ur5_robot.randomConfiguration;
% tform = getTransform(ur5_robot,randConfig,'ee_link','base');

% show(ur5_robot,randConfig);
% show(ur5_robot,randomConfiguration(ur5_robot)); %% 軸隨機角度


% 逆運動學
ik = inverseKinematics('RigidBodyTree',ur5_robot)
weights = [0.25 0.25 0.25 1 1 1];
initialguess = ur5_robot.homeConfiguration;
[configSoln,solnInfo] = ik('tool0',targetPosition,weights,initialguess);
show(ur5_robot,configSoln);

load_system('simulink/robot_system_toolbox.slx');
% sim('simulink/robot_system_toolbox.slx')
% ModelParameterNames = get_param('Task Space Motion Model2','ObjectParameters')


% robot = importrobot('iiwa14.urdf')
% smimport(ur5_robot);

% robot.show
% show(ur5_robot,'visuals','on','collision','off'); 
%% show robot detail data
% showdetails(ur5_robot)

%% robot jointposition 
% config = homeConfiguration(ur5_robot) % home
% show(ur5_robot);
% 
% config(2).JointPosition = pi/2; % 第二軸 90度
% show(ur5_robot,config);
% 
% show(robot,randomConfiguration(ur5_robot)); %% 軸隨機角度





% robot.Gravity = [0 0 -9.81];
% q = randomConfiguration(robot);

% jointTorq = inverseDynamics(robot)
% jointTorq = inverseDynamics(robot,configuration,jointVel,jointAccel) 

% gravTorq = gravityTorque(robot,q)





% 
% t = (0:0.2:10)'; % Time
% count = length(t);
% center = [0.3 0.1 0];
% radius = 0.15;
% theta = t*(2*pi/t(end));
% points = center + radius*[cos(theta) sin(theta) zeros(size(theta))];
% 
% q0 = homeConfiguration(robot);
% ndof = length(q0);
% qs = zeros(count, ndof);
% 
% ik = inverseKinematics('RigidBodyTree', robot);
% weights = [0, 0, 0, 1, 1, 0];
% endEffector = 'tool';
% 
% qInitial = q0; % Use home configuration as the initial guess
% for i = 1:count
%     % Solve for the configuration satisfying the desired end effector
%     % position
%     point = points(i,:);
%     qSol = ik(endEffector,trvec2tform(point),weights,qInitial);
%     % Store the configuration
%     qs(i,:) = qSol;
%     % Start from prior solution
%     qInitial = qSol;
% end
% 
% figure
% show(robot,qs(1,:)');
% view(2)
% ax = gca;
% ax.Projection = 'orthographic';
% hold on
% plot(points(:,1),points(:,2),'k')
% axis([-0.1 0.7 -0.3 0.5])
% framesPerSecond = 15;
% r = rateControl(framesPerSecond);
% for i = 1:count
%     show(robot,qs(i,:)','PreservePlot',false);
%     drawnow
%     waitfor(r);
% end
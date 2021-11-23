% ur5_robot = importrobot('ur_description/urdf/ur5_robot.urdf');

[ur5_robot,info] = loadrobot('universalUR5','DataFormat','column','Gravity',[0 0 -9.81]);
show(ur5_robot);

initialConfig = homeConfiguration(ur5_robot);
targetPosition = trvec2tform([0.6 -.1 0.5])

% robot = importrobot('iiwa14.urdf')
% smimport(ur5_robot);

% robot.show
show(ur5_robot,'visuals','on','collision','off'); 
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
clear;
clc;
%%%%%%%%%%%%%%%%%%%%%%%%
%% �إ߾����H�ҫ�
        % theta    d        a        alpha     offset
        %L1 = Link([0 0.2 1 pi/4 0],'standard'); %�зǼҦ� L1 = Link([0 0.2 1
        %pi/4 0],'modify'); %��i�Ҧ�
% mass = [3.7000, 8.3930, 2.33, 1.2190, 1.2190, 0.1897];

% center_of_mass = [
%         0,-0.02561, 0.00193
%         0.2125, 0, 0.11336
%         0.15, 0, 0.0265
%         0, -0.0018, 0.01634
%         0, -0.0018, 0.01634
%         0, 0, -0.001159];
%���g�q�{�зǼҦ� % robot length values (metres)
L1=Link([0       0.08916    0        pi/2      0     ],'standard'); 
L2=Link([0       0        0.425     0         0     ],'standard');
L3=Link([0       0        0.39225   0         0     ],'standard');
L4=Link([0       0.10915   0        pi/2      0     ],'standard');
L5=Link([0       0.09456    0        -pi/2     0     ],'standard');
L6=Link([0       0.0823     0        0         0     ],'standard');
robot = SerialLink([L1 L2 L3 L4 L5 L6],'name','tecoarm')%�s���s��A�����H�R�W
% robot.plot([0,0,0,0,0,0]);%��X�����H�ҫ��A�᭱�����Ө�����X�ɪ�theta���A
% robot.display();
% teach(robot);
% theta=[0,0,0,0,0,0];%���w���`��
% p=robot.fkine(theta)%fkine���Ѩ�ơA�ھڧڭ̵��w�����`��theta�A�D�ѥX���ݦ�mp
% q=robot.ikine(p)%ikine�f�Ѩ�ơA�ھڧڭ̵��w�����ݦ�mp�A�D�ѥX���`��q
%% �y��W���ܷN
% T1=transl(0.5,0,0);%�ھڵ��w�l�l�I�A�o��_�l�I��m
% T2=transl(0,0.5,0);%�ھڵ��w�פ��I�A�o��פ��I��m
% q1=robot.ikine(T1);%�ھڰ_�l�I��m�A�o��_�l�I���`��
% q2=robot.ikine(T2);%�ھڲפ��I��m�A�o��פ��I���`��
% [q ,qd, qdd]=jtraj(q1,q2,50); %�����h�����y��A�o�����`���סA���t�סA���[�t�סA50���ļ˼�
% grid on
% T=robot.fkine(q);%���u���ȡA�o�쥽�ݰ��澹����m
% nT=T.T; plot3(squeeze(nT(1,4,:)),squeeze(nT(2,4,:)),squeeze(nT(3,4,:)));%��X�����I�y��
% hold on
% robot.plot(q);%�ʵe�i��



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
%     robot.plot([0,0,0,0,0,0]);%��X�����H�ҫ��A�᭱�����Ө�����X�ɪ�theta���A
%     robot.display();
%     teach(robot);

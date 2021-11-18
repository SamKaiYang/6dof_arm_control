function Trajectory_generation()
clear;
clc;
%% �ҫ��ɤJ
tecoarm;

robot.plot([0,0,0,0,0,0]);%��X�����H�ҫ��A�᭱�����Ө�����X�ɪ�theta���A
robot.display();
teach(robot);
theta=[0,0,0,0,0,0];%���w���`��
p=robot.fkine(theta)%fkine���Ѩ�ơA�ھڧڭ̵��w�����`��theta�A�D�ѥX���ݦ�mp
q=robot.ikine(p)%ikine�f�Ѩ�ơA�ھڧڭ̵��w�����ݦ�mp�A�D�ѥX���`��q

sliderValue;
%% ��J��ܰѼ�
joint_to = 'joint'; %  �]�w����to���ײ���joint 0����mto��m����position
traj = 'ctraj';%�Q�Τ����h�����y��W�� jtraj %�Q�Χ��å[�t���ô�t�y��W�� ctraj
%% �y��W���ܷN
if (traj == 'jtraj')
    %******************%
    %      jtraj       %
    %******************%
    %% ���� to ����
    init_ang = [0 0 0 0 0 0];
    targ_ang = [pi/4, -pi/3, pi/5, pi/2, -pi/4, pi/6];
    step = 50;
    [q,qd,qdd] = jtraj(init_ang,targ_ang,step);                                %�����o�쨤�סB���t�סB���[�t�ת����ǦC
    %% ��m to ��m
    % T1=transl(0.5,0,0);%�ھڵ��w�l�l�I�A�o��_�l�I��m
    % T2=transl(0,0.5,0.5);%�ھڵ��w�פ��I�A�o��פ��I��m
    % q1=robot.ikine(T1);%�ھڰ_�l�I��m�A�o��_�l�I���`��
    % q2=robot.ikine(T2);%�ھڲפ��I��m�A�o��פ��I���`��
    % [q ,qd, qdd]=jtraj(q1,q2,50); %�����h�����y��A�o�����`���סA���t�סA���[�t�סA50���ļ˼�

    grid on
    T=robot.fkine(q);%���u���ȡA�o�쥽�ݰ��澹����m
    nT=T.T; plot3(squeeze(nT(1,4,:)),squeeze(nT(2,4,:)),squeeze(nT(3,4,:)));%��X�����I�y��

    zlim([-1.5 1.5])
    hold on
    robot.plot(q);%�ʵe�i��
    
elseif (traj == 'ctraj') 
    %******************%
    %      ctraj       %
    %******************%
    %�ѼƳ]�m
    init_ang = [0 0 0 0 0 0];
    targ_ang = [pi/4, -pi/3, pi/5, pi/2, -pi/4, pi/6];
    step = 50;

    T0 = robot.fkine(init_ang)
    T1 = robot.fkine(targ_ang)

    Tc = ctraj(T0,T1,step);                                                    %�o��C�@�B��T�}�C
    q = robot.ikine(Tc,'mask',[1 1 1 1 0 1]);
    grid on
    nT=Tc.T;
    plot3(squeeze(nT(1,4,:)),squeeze(nT(2,4,:)),squeeze(nT(3,4,:)));%��X�����I�y��

    zlim([-1.5 1.5])
    hold on
    robot.plot(q);%�ʵe�i��
end 

end

%% �ҫ��ɤJ
mdl_Dyn_6dof
du=pi/180;
ra=180/pi;
q=[0,30,0,0,0,0]
robot.gravity=[0;0;9.81];
robot.payload(5, [0 0 0])

%% ���� to ����
init_ang = [0 0 0 0 0 0];
targ_ang = [0, pi/6, 0, 0, 0, 0];
step = 50;
[q,qd,qdd] = jtraj(init_ang,targ_ang,step);                                %�����o�쨤�סB���t�סB���[�t�ת����ǦC

grid on
T=robot.fkine(q);%�ھڴ��ȡA�o�쥽�ݰ��澹����m
nT=T.T; plot3(squeeze(nT(1,4,:)),squeeze(nT(2,4,:)),squeeze(nT(3,4,:)));%��X�����I�y��
% squeeze��ƥΩ�R���x�}������@���]Remove singleton dimensions�^
torque = robot.gravload(q)

zlim([-1.5 1.5])
hold on
robot.plot(q);%�ʵe�i��
%% dynamic 
% tau1=robot.gravload([30,30,30,30,30,30]*du);
% robot.gravity=[0;0;-9.81];
% tau2=robot.gravload([30,30,30,30,30,30]*du);
% robot.gravity
% [q2_st,q2_end]=deal(robot.links(2).qlim(1),robot.links(2).qlim(2));
% [q3_st,q3_end]=deal(robot.links(3).qlim(1),robot.links(3).qlim(2));
% [Q2 Q3] = meshgrid(q2_st:0.1:q2_end, q3_st:0.1:q3_end);
% for i = 1:numcols(Q2)
%     for j = 1:numcols(Q3)
%         g = robot.gravload([0 Q2(i,j) Q3(i,j) 0 0]);
%         g2(i,j) = g(2);
%         g3(i,j) = g(3);
%     end
% end

% figure('name','�����`���O�t��')
% Q2du=Q2*ra;Q3du=Q3*ra;
% surfl(Q2du,Q3du,g2);
% xlabel('\theta_2(deg)');ylabel('\theta_3(deg)');zlabel('���`2���O�t��');
% figure('name','�y���`���O�t��')
% surfl(Q2du,Q3du,g3)
% xlabel('\theta_2(deg)');ylabel('\theta_3(deg)');zlabel('���`3���O�t��');
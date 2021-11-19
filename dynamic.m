%% 模型導入
mdl_Dyn_6dof
du=pi/180;
ra=180/pi;
q=[0,30,0,0,0,0]
robot.gravity=[0;0;9.81];
robot.payload(5, [0 0 0])

%% 角度 to 角度
init_ang = [0 0 0 0 0 0];
targ_ang = [0, pi/6, 0, 0, 0, 0];
step = 50;
[q,qd,qdd] = jtraj(init_ang,targ_ang,step);                                %直接得到角度、角速度、角加速度的的序列

grid on
T=robot.fkine(q);%根據插值，得到末端執行器的位置
nT=T.T; plot3(squeeze(nT(1,4,:)),squeeze(nT(2,4,:)),squeeze(nT(3,4,:)));%輸出末端點軌跡
% squeeze函數用於刪除矩陣中的單一維（Remove singleton dimensions）
torque = robot.gravload(q)

zlim([-1.5 1.5])
hold on
robot.plot(q);%動畫展示
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

% figure('name','肩關節重力負荷')
% Q2du=Q2*ra;Q3du=Q3*ra;
% surfl(Q2du,Q3du,g2);
% xlabel('\theta_2(deg)');ylabel('\theta_3(deg)');zlabel('關節2重力負荷');
% figure('name','肘關節重力負荷')
% surfl(Q2du,Q3du,g3)
% xlabel('\theta_2(deg)');ylabel('\theta_3(deg)');zlabel('關節3重力負荷');
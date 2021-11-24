function Trajectory_generation()
clear;
clc;
%% 模型導入
tecoarm;

robot.plot([0,0,0,0,0,0]);%輸出機器人模型，後面的六個角為輸出時的theta姿態
robot.display();
teach(robot);
theta=[0,0,0,0,0,0];%指定關節角
p=robot.fkine(theta)%fkine正解函數，根據我們給定的關節角theta，求解出末端位置p
q=robot.ikine(p)%ikine逆解函數，根據我們給定的末端位置p，求解出關節角q

sliderValue;
%% 輸入顯示參數
joint_to = 'joint'; %  設定角度to角度移動joint 0為位置to位置移動position
traj = 'ctraj';%利用五次多項式軌跡規劃 jtraj %利用均勻加速均勻減速軌跡規劃 ctraj
%% 軌跡規劃示意
if (traj == 'jtraj')
    %******************%
    %      jtraj       %
    %******************%
    %% 角度 to 角度
    init_ang = [0 0 0 0 0 0];
    targ_ang = [pi/4, -pi/3, pi/5, pi/2, -pi/4, pi/6];
    step = 50;
    [q,qd,qdd] = jtraj(init_ang,targ_ang,step);                                %直接得到角度、角速度、角加速度的的序列
    %% 位置 to 位置
    % T1=transl(0.5,0,0);%根據給定始始點，得到起始點位置
    % T2=transl(0,0.5,0.5);%根據給定終止點，得到終止點位置
    % q1=robot.ikine(T1);%根據起始點位置，得到起始點關節角
    % q2=robot.ikine(T2);%根據終止點位置，得到終止點關節角
    % [q ,qd, qdd]=jtraj(q1,q2,50); %五次多項式軌跡，得到關節角度，角速度，角加速度，50為採樣數

    grid on
    T=robot.fkine(q);%根据插值，得到末端執行器的位置
    nT=T.T; plot3(squeeze(nT(1,4,:)),squeeze(nT(2,4,:)),squeeze(nT(3,4,:)));%輸出末端點軌跡

    zlim([-1.5 1.5])
    hold on
    robot.plot(q);%動畫展示
    
elseif (traj == 'ctraj') 
    %******************%
    %      ctraj       %
    %******************%
    %參數設置
    init_ang = [0 0 0 0 0 0];
    targ_ang = [pi/4, -pi/3, pi/5, pi/2, -pi/4, pi/6];
    step = 50;

    T0 = robot.fkine(init_ang)
    T1 = robot.fkine(targ_ang)

    Tc = ctraj(T0,T1,step);                                                    %得到每一步的T陣列
    q = robot.ikine(Tc,'mask',[1 1 1 1 0 1]);
    grid on
    nT=Tc.T;
    plot3(squeeze(nT(1,4,:)),squeeze(nT(2,4,:)),squeeze(nT(3,4,:)));%輸出末端點軌跡

    zlim([-1.5 1.5])
    hold on
    robot.plot(q);%動畫展示
end 

end

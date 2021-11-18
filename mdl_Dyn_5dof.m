% mdl_Dyn_5dof.m
% 单臂动力学结构参数
d=[        0,     0,        0,        0,       0];
a=[        0,    13,   233.24,   175.64,       0];%/1000
alpha=[    0,  pi/2,        0,        0,    pi/2];

%使用offset
L(1)=Link('d',d(1),'a',a(1),'alpha',alpha(1),'modified'); 
L(2)=Link('d',d(2),'a',a(2),'alpha',alpha(2),'offset',pi/2,'modified');
L(3)=Link('d',d(3),'a',a(3),'alpha',alpha(3),'modified');
L(4)=Link('d',d(4),'a',a(4),'alpha',alpha(4),'offset',pi/2,'modified');
L(5)=Link('d',d(5),'a',a(5),'alpha',alpha(5),'modified');

du=pi/180;
ra=180/pi;
%定义关节范围
L(1).qlim =[-170, 170]*du;
L(2).qlim =[60-70, 60+70]*du;%-10,130
L(3).qlim =[-70-70,-70+70]*du;%-140,0
L(4).qlim =[-70,70]*du;
L(5).qlim =[-170, 170]*du;
bot=SerialLink(L,'name','五自由度机械臂');
%bot.tool= transl(0, 0, tool)

% 动力学参数
data=[
    %     Ixx，    Iyy,      Izz,        Ixy,        Ixz,        Iyz,         xc,         yc,        zc,       m
       47.316,  51.601,   77.113,     -0.003,     -2.549,     -0.016,     -0.598,      0.016,   -23.413,   0.076;
       62.746, 651.130,  704.486,     29.632,     -0.001,     -0.003,    104.910,    -31.512,     0.001,   0.151;
        6.264, 224.674,  228.590,    -14.345,     -0.006,          0,     69.863,      8.061,     0.015,   0.065;
        1.502,   1.800,    2.241,      0.455,          0,          0,      4.498,    -12.503,         0,   0.008;
       13.735,  14.594,   15.321,          0,      0.004,          0,      0.046,          0,    43.571,   0.036
    ];

% data(:,1:6)=data(:,1:6)./1000000;
% data(:,7:9)=data(:,7:9)./1000;

% 惯性张量
data(:,[5 6])=data(:,[6 5]);%交换Ixz和Iyz
for i=1:5
   %I = [L_xx, L_yy, L_zz, L_xy, L_yz, L_xz]
   %放入是6个数字，但存储是矩阵形式的9个数字
   bot.links(i).I=data(i,1:6); 
end

%质心
for i=1:5
   bot.links(i).r=data(i,7:9); 
end

% 质量
for i=1:5
   bot.links(i).m=data(i,10); 
end

% 对于空中机械臂，重力与坐标系方向一致，所以为正
% 这与matlab自带的重力系统相反，所以matlab自带函数为负
% 重力单位是m·s-2，也是N/kg,考虑到第二种意义，这里不改变数量值
bot.gravity=[0;0;-9.81];


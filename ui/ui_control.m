function ui_control
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

x = cg(0)
y = cg(0)
z = cg(0)
T = RPY2TR(cg(0) , cg(0) , cg(0) )
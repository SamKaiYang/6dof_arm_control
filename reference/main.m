function main()
clc;
clear all;
%% �ҫ��ɤJ
tecoarm;

robot.plot([0,0,0,0,0,0]);%��X�����H�ҫ��A�᭱�����Ө�����X�ɪ�theta���A
robot.display();
teach(robot);
theta=[0,0,0,0,0,0];%���w���`��
p=robot.fkine(theta)%fkine���Ѩ�ơA�ھڧڭ̵��w�����`��theta�A�D�ѥX���ݦ�mp
q=robot.ikine(p)%ikine�f�Ѩ�ơA�ھڧڭ̵��w�����ݦ�mp�A�D�ѥX���`��q


end
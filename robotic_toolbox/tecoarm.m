clear;
clc;
%%%%%%%%%%%%%%%%%%%%%%%%
%% 建立機器人模型
        % theta    d        a        alpha     offset
        %L1 = Link([0 0.2 1 pi/4 0],'standard'); %標準模式 L1 = Link([0 0.2 1
        %pi/4 0],'modify'); %改進模式
% mass = [3.7000, 8.3930, 2.33, 1.2190, 1.2190, 0.1897];

% center_of_mass = [
%         0,-0.02561, 0.00193
%         0.2125, 0, 0.11336
%         0.15, 0, 0.0265
%         0, -0.0018, 0.01634
%         0, -0.0018, 0.01634
%         0, 0, -0.001159];
%不寫默認標準模式 % robot length values (metres)
L1=Link([0       0.08916    0        pi/2      0     ],'standard'); 
L2=Link([0       0        0.425     0         0     ],'standard');
L3=Link([0       0        0.39225   0         0     ],'standard');
L4=Link([0       0.10915   0        pi/2      0     ],'standard');
L5=Link([0       0.09456    0        -pi/2     0     ],'standard');
L6=Link([0       0.0823     0        0         0     ],'standard');
robot = SerialLink([L1 L2 L3 L4 L5 L6],'name','tecoarm')%連接連桿，機器人命名

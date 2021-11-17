function main()
clc;
clear all;
%%               逆運動學
Od= [0 20 20 0 0 0]
link=[10 10 10 10]

kinematics(Od,link);
%%               正運動學
% kinematics( JointAngle );
end
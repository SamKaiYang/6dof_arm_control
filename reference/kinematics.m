function kinematics(Od,link)
%% 【 Step １】 定義手臂自由度與DH連桿參數表與齊次轉換函數
        % 手臂的自由度
        % 手臂的各軸長度:d1=10 d2=10 d3=10         
%% 【 Step 2 】 計算逆運動學與正運動學
        DOF=6;
        sdh.theta = [0,0,0,0,0,0];  
        sdh.a=[0,42.5,39.225,0,0,0];
        sdh.d=[8.916,0,0,10.915,9.456,8.23];
        % sdh.alpha=[pi/2,0,0,pi/2,-pi/2,0]; 
        sdh.alpha=[90,0,0,90,-90,0]; 
        for i=1:DOF
           ur5link(i)=Link( [sdh.theta(i),sdh.d(i),sdh.a(i),sdh.alpha(i)],'standard' )
        end
        pos = ForwardKinematics_ur5link(ur5link)
%% 【 Step 3 】 計算正運動學        
        % DH 參數表        -->  % 建立DHparameter( )          
        % 產生齊次轉換函數  -->   % 建立GenerateTransformationMatrices( )
%         JointAngle = [0 0 0 0 0 0];
%         pos=ForwardKinematics(JointAngle)
%% 【 Step 4 】 繪製手臂
DrawRobotManipulator(pos)
end
% =========================================================================
%                              【Functions】  DHparameter for ur5link
% =========================================================================
%% 正運動學
function pos= ForwardKinematics_ur5link(link)
    % UR5 DH
    % 六軸的 DH 參數 [ a      α        d       θ ]
    DH=[link(1).a link(1).alpha link(1).d link(1).theta;
        link(2).a link(2).alpha link(2).d link(2).theta;
        link(3).a link(3).alpha link(3).d link(3).theta;
        link(4).a link(4).alpha link(4).d link(4).theta;
        link(5).a link(5).alpha link(5).d link(5).theta;
        link(6).a link(6).alpha link(6).d link(6).theta]
    DH_ori=[0       90      8.916       0;
    42.5    0       0           0;
    39.225  0       0           0;
    0       90      10.915      0;
    0       -90     9.456       0;
    0       0       8.23        0]

	Tran1=GenerateTransformationMatrices(DH,1,1);
	Tran2=GenerateTransformationMatrices(DH,1,2);
	Tran3=GenerateTransformationMatrices(DH,1,3);
    Tran4=GenerateTransformationMatrices(DH,1,4);
    Tran5=GenerateTransformationMatrices(DH,1,5);
    Tran6=GenerateTransformationMatrices(DH,1,6);
    pos=[0 0 0;
        Tran1(1,4) Tran1(2,4) Tran1(3,4);
        Tran2(1,4) Tran2(2,4) Tran2(3,4);
        Tran3(1,4) Tran3(2,4) Tran3(3,4);
        Tran4(1,4) Tran4(2,4) Tran4(3,4);
        Tran5(1,4) Tran5(2,4) Tran5(3,4);
        Tran6(1,4) Tran6(2,4) Tran6(3,4);]
    R6 = [Tran6(1,1) Tran6(1,2) Tran6(1,3);
        Tran6(2,1) Tran6(2,2) Tran6(2,3);
        Tran6(3,3) Tran6(3,2) Tran6(3,3)];
    Pitch = atan2(Tran6(3,3),sqrt(1-Tran6(3,3)^2));
    if(Pitch == 90||Pitch == -90)
       Roll = 0;
       Yaw = sin(Pitch)*atan2(Tran6(2,2),Tran6(1,2))*180/pi;
       Pitch = Pitch*180/pi;
    else
       Roll = atan2(-Tran6(1,3)/cos(Pitch),Tran6(2,3)/cos(Pitch))*180/pi;
       Yaw  = atan2(-Tran6(3,2)/cos(Pitch),Tran6(3,1)/cos(Pitch))*180/pi;
       Pitch = Pitch*180/pi;
    end
    
    
end
% =========================================================================
%                              【Functions】  DHparameter
% =========================================================================
%%  DH 參數表
function DH= DHparameter(JointAngle)
% 六軸的 DH 參數 [ a      α        d       θ ]
% UR5 DH
DH=[0       90      8.916       JointAngle(1);
    42.5    0       0           JointAngle(2);
    39.225  0       0           JointAngle(3);
    0       90      10.915      JointAngle(4);
    0       -90     9.456       JointAngle(5);
    0       0       8.23        JointAngle(6)]

% TECO ARM DH
% DH=[0       360       13.01       JointAngle(1)-360;
%     0       360       0           JointAngle(2)-360;
%     -31.4   145     0           JointAngle(3)-145;
%     -28.4   360       11.45       JointAngle(4)-360;
%     0       360       9           JointAngle(5)-360;
%     0       360       4.8         JointAngle(6)-360]
end
%%  齊次轉換矩陣
function  Tran=GenerateTransformationMatrices(DH,start,stop)
                   Tranoriginal=eye(4);
	for i=start:stop
	tran=[cosd(DH(i,4)) -sind(DH(i,4))*cosd(DH(i,2)) sind(DH(i,4))*sind(DH(i,2)) DH(i,1)*cosd(DH(i,4));
    	      sind(DH(i,4)) cosd(DH(i,4))*cosd(DH(i,2)) -cosd(DH(i,4))*sind(DH(i,2)) DH(i,1)*sind(DH(i,4));
    		                      0               sind(DH(i,2))             cosd(DH(i,2))      DH(i,3);
   					   0               0                         0                  1];
	Tranoriginal=Tranoriginal*tran;
	Tran=Tranoriginal;
	end
    
end
%% 正運動學
function pos= ForwardKinematics(JointAngle)
    DH=DHparameter(JointAngle);
	Tran1=GenerateTransformationMatrices(DH,1,1);
	Tran2=GenerateTransformationMatrices(DH,1,2);
	Tran3=GenerateTransformationMatrices(DH,1,3);
    Tran4=GenerateTransformationMatrices(DH,1,4);
    Tran5=GenerateTransformationMatrices(DH,1,5);
    Tran6=GenerateTransformationMatrices(DH,1,6);
    pos=[0 0 0;
        Tran1(1,4) Tran1(2,4) Tran1(3,4);
        Tran2(1,4) Tran2(2,4) Tran2(3,4);
        Tran3(1,4) Tran3(2,4) Tran3(3,4);
        Tran4(1,4) Tran4(2,4) Tran4(3,4);
        Tran5(1,4) Tran5(2,4) Tran5(3,4);
        Tran6(1,4) Tran6(2,4) Tran6(3,4);];
    R6 = [Tran6(1,1) Tran6(1,2) Tran6(1,3);
        Tran6(2,1) Tran6(2,2) Tran6(2,3);
        Tran6(3,3) Tran6(3,2) Tran6(3,3)] ;
    Pitch = atan2(Tran6(3,3),sqrt(1-Tran6(3,3)^2));
    if(Pitch == 90||Pitch == -90)
       Roll = 0;
       Yaw = sin(Pitch)*atan2(Tran6(2,2),Tran6(1,2))*180/pi;
       Pitch = Pitch*180/pi;
    else
       Roll = atan2(-Tran6(1,3)/cos(Pitch),Tran6(2,3)/cos(Pitch))*180/pi;
       Yaw  = atan2(-Tran6(3,2)/cos(Pitch),Tran6(3,1)/cos(Pitch))*180/pi;
       Pitch = Pitch*180/pi;
    end
    
    
end
% =========================================================================
%                              【Functions】  InverseKinematics original for
%                              industrial robot arm
%                           
% =========================================================================
%% 逆運動學1~3角度
function  JointAngle=InverseKinematics(Od,Link)
P = Od(4)*pi/180
R = Od(5)*pi/180
Y = Od(6)*pi/180
Cp = cos(P)
Sp = sin(P)
Cr = cos(R)
Sr = sin(R)
Cy = cos(Y)
Sy = sin(Y)
R06 = [Cr*Sy+Sr*Sp*Cy  Cr*Cy-Sr*Sp*Sy  -Sr*Cp;
       Sr*Sy-Cr*Sp*Cy  Sr*Cy+Cr*Sp*Sy  Cr*Cp;
       Cp*Cy           -Cp*Sy          Sp ]
Oc = [Od(1);Od(2);Od(3)] - 10*R06*[0;0;1]
Oc = Oc'

JointAngle(1) =atan2(-Oc(1), Oc(2));
JointAngle(3) =-acos((Oc(1)^2 + Oc(2)^2 + (Oc(3) - Link(1))^2 - Link(2)^2 - Link(3)^2) /...
                   (2*Link(2)*Link(3)));
Beta =atan2(Oc(3)-Link(1), (Oc(1)^2 + Oc(2)^2)^0.5);
Alpha =atan2(Link(3)*sin(JointAngle(3)),Link(2) + Link(3)*cos(JointAngle(3)));
    JointAngle(2) = Beta - Alpha
    %JointAngle=JointAngle*180/pi
    Ang1e1 = JointAngle(1)
    Angle3 = JointAngle(3)
    Angle2 = JointAngle(2)
    C1 = cos(Ang1e1)
    C2 = cos(Ang1e2)
    C3 = cos(Ang1e3)
    C23 = cos(Ang1e2 + Ang1e3)
    S23 = sin(Ang1e2 + Ang1e3)
    S1 = sin(Ang1e1)
    S2 = sin(Ang1e2)
    S3 = sin(Ang1e3)
    R03 = [C1*C23  S1  C1*S23;
           S1*C23  -C1 S1*S23;
           S23     0   -C23]
    R36 = (R03)'*R06
    JointAngle(4) = atan2(R36(2,3),R36(1,3))
    JointAngle(5) = atan2(sqrt(1-(R36(3,3))^2),R36(3,3))
    JointAngle(6) = atan2(R36(3,2),-R36(3,1))
    JointAngle=JointAngle*180/pi
end        
%%  畫圖 畫機械手臂 輸入: 自由度，各關節的位置，各關節的座標
function  DrawRobotManipulator(pos)
%axis([-50,50,-40,80,-20,80])
axis([-200,200,-200,200,-100,200])
temp=pos;
hold on
xlabel('x-axis'); ylabel('y-axis'); zlabel('z-axis');
plot3(temp(:,1),temp(:,2),temp(:,3),'bo-','linewidth',3,'markeredgecolor','r','markerfacecolor','r','markersize',5);
grid on
end
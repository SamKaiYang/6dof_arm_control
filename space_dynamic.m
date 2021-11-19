%六軸機械臂工作空間計算，即最大payload
format short;%保留精度
%% 模型導入
mdl_Dyn_6dof

robot.gravity=[0;0;9.81];
robot.payload(5, [0 0 0]) % payload 5kg
%% 
%角度轉換
du=pi/180;  %度
radian=180/pi; %弧度
%% 數值法 求取工作空間
%關節角限位
q1_s=-180   ;q1_end=180;
q2_s=-90      ;q2_end=90;
q3_s=-90    ;q3_end=90;
q4_s=-180   ;q4_end=180;
q5_s=-90    ;q5_end=90;
q6_s=0      ;q6_end=360;

%計算參數
step=20;%計算步距 % 解析度
%t=0:1:(q5_end-q5_s)/step;%產生時間向量 
step1 = (q1_end - q1_s)/step; 
step2 = (q2_end - q2_s)/step; 
step3 = (q3_end - q3_s)/step; 
step4 = (q4_end - q4_s)/step; 
step5 = (q5_end - q5_s)/step; 
step6 = (q6_end - q6_s)/step; 
%% T_cell={((q1_end-q1_s)/step)*((q2_end-q2_s)/step)*((q3_end-q3_s)/step)*((q4_end-q4_s)/step)};

%窮舉法正運動學計算工作空間
tic;%tic1    
i = 1;
T = zeros(3,1);
T_x = zeros(1,step1*step2*step3*step4*step5);
T_y = zeros(1,step1*step2*step3*step4*step5);
T_z = zeros(1,step1*step2*step3*step4*step5);
for  q1=q1_s:step:q1_end
    for  q2=q2_s:step:q2_end
        for  q3=q3_s:step:q3_end
            for  q4=q4_s:step:q4_end
                for  q5=q5_s:step:q5_end
                    T = robot.fkine([q1*du q2*du q3*du q4*du q5*du 0*du])
                    torque = robot.gravload([q1*du q2*du q3*du q4*du q5*du 0*du])
                    % A = T.t(1)
                    T_x(1,i) = T.t(1);
                    T_y(1,i) = T.t(2);
                    T_z(1,i) = T.t(3);
                    i=i+1;
                end
            end
        end
    end 
end
disp(['循環運行時間：',num2str(toc)]); 
t1=clock;

%繪製工作空間
figure('name','六軸機械臂工作空間')
hold on
plotopt = {'noraise', 'nowrist', 'nojaxes', 'delay',0};
robot.plot([0 0 0 0 0 0], plotopt{:});
plot3(T_x,T_y,T_z,'r.','MarkerSize',3);
disp(['繪製工作空間運行時間：',num2str(etime(clock,t1))]);  

%獲取X,Y,Z空間座標範圍,及圓範圍用於判讀座標可靠性
X_min=min(T_x);
Y_min=min(T_y);
Z_min=min(T_z);
X_max=max(T_x);
Y_max=max(T_y);
Z_max=max(T_z);
R_min_squre=X_min^2+Y_min^2+Z_min^2;
R_max_squre=X_max^2+Y_max^2+Z_max^2;
Point_range=[X_min X_max Y_min Y_max Z_min Z_max R_max_squre]
hold off
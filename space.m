%���b�����u�u�@�Ŷ��p��
clc;
clear;
format short;%�O�d���
%% �ҫ��ɤJ
tecoarm;
%�����ഫ
du=pi/180;  %��
radian=180/pi; %����
%% �ƭȪk �D���u�@�Ŷ�
%���`������
q1_s=-180   ;q1_end=180;
q2_s=-90      ;q2_end=90;
q3_s=-90    ;q3_end=90;
q4_s=-180   ;q4_end=180;
q5_s=-90    ;q5_end=90;
q6_s=0      ;q6_end=360;

%�p��Ѽ�
step=20;%�p��B�Z % �ѪR��
%t=0:1:(q5_end-q5_s)/step;%���ͮɶ��V�q 
step1 = (q1_end - q1_s)/step; 
step2 = (q2_end - q2_s)/step; 
step3 = (q3_end - q3_s)/step; 
step4 = (q4_end - q4_s)/step; 
step5 = (q5_end - q5_s)/step; 
step6 = (q6_end - q6_s)/step; 
%% T_cell={((q1_end-q1_s)/step)*((q2_end-q2_s)/step)*((q3_end-q3_s)/step)*((q4_end-q4_s)/step)};

%�a�|�k���B�ʾǭp��u�@�Ŷ�
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
disp(['�`���B��ɶ��G',num2str(toc)]); 
t1=clock;

%ø�s�u�@�Ŷ�
figure('name','���b�����u�u�@�Ŷ�')
hold on
plotopt = {'noraise', 'nowrist', 'nojaxes', 'delay',0};
robot.plot([0 0 0 0 0 0], plotopt{:});
plot3(T_x,T_y,T_z,'r.','MarkerSize',3);
disp(['ø�s�u�@�Ŷ��B��ɶ��G',num2str(etime(clock,t1))]);  

%���X,Y,Z�Ŷ��y�нd��,�ζ�d��Ω�PŪ�y�Хi�a��
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

% figure('name','�����H���ݦ첾��')
% subplot(3,1,1);   
% plot(t1, squeeze(T(1,4,:))); xlabel('Time (s)'); ylabel('X (m)');
% subplot(3,1,2);   
% plot(t1, squeeze(T(2,4,:))); xlabel('Time (s)'); ylabel('Y (m)'); 
% subplot(3,1,3);   
% plot(t1, squeeze(T(3,4,:))); xlabel('Time (s)'); ylabel('Z (m)'); 


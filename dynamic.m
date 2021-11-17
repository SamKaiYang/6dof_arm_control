mdl_puma560;

gravload = p560.gravload(qn); %�p�⭫�O�t��
p560.gravity %�d�ݭ��O
% ���O�t���H���`�쫬���ܴ�
[Q2 Q3] = meshgrid(-pi:0.1:pi, -pi:0.1:pi);
for i = 1:numcols(Q2)
    for j = 1:numcols(Q3)
        g = p560.gravload([0 Q2(i,j) Q3(i,j) 0 0 0]);%���`2/3�]�m���סA��l�]�m��0
        g2(i,j) = g(2);
        g3(i,j) = g(3);
    end
end

%% ø��
figure('name','�����`���O����')
surfl(Q2,Q3,g2);
xlabel('\theta_2(rad)');ylabel('\theta_3(rad)');zlabel('���`2���O����');
figure('name','�y���`���O����')
surfl(Q2,Q3,g3)
xlabel('\theta_2(rad)');ylabel('\theta_3(rad)');zlabel('���`3���O����');
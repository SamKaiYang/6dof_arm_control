mdl_puma560;

gravload = p560.gravload(qn); %計算重力負荷
p560.gravity %查看重力
% 重力負荷隨關節位型的變換
[Q2 Q3] = meshgrid(-pi:0.1:pi, -pi:0.1:pi);
for i = 1:numcols(Q2)
    for j = 1:numcols(Q3)
        g = p560.gravload([0 Q2(i,j) Q3(i,j) 0 0 0]);%關節2/3設置角度，其餘設置為0
        g2(i,j) = g(2);
        g3(i,j) = g(3);
    end
end

%% 繪圖
figure('name','肩關節重力載荷')
surfl(Q2,Q3,g2);
xlabel('\theta_2(rad)');ylabel('\theta_3(rad)');zlabel('關節2重力載荷');
figure('name','肘關節重力載荷')
surfl(Q2,Q3,g3)
xlabel('\theta_2(rad)');ylabel('\theta_3(rad)');zlabel('關節3重力載荷');
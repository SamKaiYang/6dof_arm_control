slCharacterEncoding('UTF-8')
mdl_Dyn_5dof
du=pi/180;
ra=180/pi;
bot.gravity=[0;0;9.81];
tau1=bot.gravload([30,30,-30,30,30]*du);
bot.gravity=[0;0;-9.81];
tau2=bot.gravload([30,30,-30,30,30]*du);
bot.gravity
[q2_st,q2_end]=deal(bot.links(2).qlim(1),bot.links(2).qlim(2));
[q3_st,q3_end]=deal(bot.links(3).qlim(1),bot.links(3).qlim(2));
[Q2 Q3] = meshgrid(q2_st:0.1:q2_end, q3_st:0.1:q3_end);
for i = 1:numcols(Q2)
    for j = 1:numcols(Q3)
        g = bot.gravload([0 Q2(i,j) Q3(i,j) 0 0]);
        g2(i,j) = g(2);
        g3(i,j) = g(3);
    end
end

figure('name','肩關節重力負荷')
Q2du=Q2*ra;Q3du=Q3*ra;
surfl(Q2du,Q3du,g2);
xlabel('\theta_2(deg)');ylabel('\theta_3(deg)');zlabel('關節2重力負荷');
figure('name','肘關節重力負荷')
surfl(Q2du,Q3du,g3)
xlabel('\theta_2(deg)');ylabel('\theta_3(deg)');zlabel('關節3重力負荷');
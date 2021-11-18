function cg = sliderValue
    % Create figure window and components
    
    fig = uifigure('Position',[200 200 400 400]);
    
    % cg = uigauge(fig,'Position',[100 100 120 120]);
    cg = [0 0 0 0 0 0 ];
    sld_x = uislider(fig,...
        'Position',[100 300 120 3],...
        'ValueChangedFcn',@(sld_x,event) updateGauge(sld_x,cg(0)));
    sld_y = uislider(fig,...
        'Position',[100 250 120 3],...
        'ValueChangedFcn',@(sld_y,event) updateGauge(sld_y,cg(1)));
    sld_z = uislider(fig,...
        'Position',[100 200 120 3],...
        'ValueChangedFcn',@(sld_z,event) updateGauge(sld_z,cg(2)));
    sld_a = uislider(fig,...
        'Position',[100 150 120 3],...
        'ValueChangedFcn',@(sld_a,event) updateGauge(sld_a,cg(3)));
    sld_b = uislider(fig,...
        'Position',[100 100 120 3],...
        'ValueChangedFcn',@(sld_b,event) updateGauge(sld_b,cg(4)));
    sld_c = uislider(fig,...
        'Position',[100 50 120 3],...
        'ValueChangedFcn',@(sld_c,event) updateGauge(sld_c,cg(5)));

    sld_x.Limits = [-50 50];
    sld_x.Value = 0;
    sld_y.Limits = [-50 50];
    sld_y.Value = 0;
    sld_z.Limits = [-50 50];
    sld_z.Value = 0;
    sld_a.Limits = [-50 50];
    sld_a.Value = 0;
    sld_b.Limits = [-50 50];
    sld_b.Value = 0;
    sld_c.Limits = [-50 50];
    sld_c.Value = 0;
    

end
    
    % Create ValueChangedFcn callback
function updateGauge(sld,cg)
    cg = sld.Value;
end
    
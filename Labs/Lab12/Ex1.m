x = 0:pi/69:2*pi;

y1 = sin(x);
y2 = cos(x);

plot(x,y1, 'b', x, y2, 'r+');

legend({'y1 = sin(x)','y2 = cos(x)'},'Location','southwest')

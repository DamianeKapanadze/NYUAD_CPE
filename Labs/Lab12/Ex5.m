x = 0:pi/69:2*pi;

y = 23*cos(pi*x);

plot(x, sin(x), 'b');
hold on
plot(x, cos(x), 'r');

fplot('23*cos(pi*x)',[0,2*pi], 'k');
hold off
theta0 = 5*pi/12;
v0 = 50.75;
g = 9.8;

y0 = 0;
x0 = 0;

t=0:0.1:10;

y = y0 - 0.5*g*t.*t + t*v0*sin(theta0);

x = x0 + t*v0*cos(theta0);
plot(x,y);
grid on

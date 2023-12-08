x = -8:0.01:8;
y = -8:0.01:8;
r = sqrt(x.^2+y.^2);

z = sin(r)./r;

plot(x,z);

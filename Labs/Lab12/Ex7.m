x = -10:0.1:10;
y = -10:0.1:10;
z = zeros(size(x));

for i = 1:length(x)
    for j = 1:length(x)
        z(i,j) = sin(x(i)/3) * cos(y(j)/3);
    end
end

surf(z);
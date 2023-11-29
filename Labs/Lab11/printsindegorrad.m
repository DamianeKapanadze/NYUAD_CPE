d = input("input 'd' to do the operation in degrees, otherwise its in radians");
x = input("amount of degrees or radians");

if(d == "d")
    fprintf('%f', sind(x));
else
    fprintf('%f', sin(x));
end
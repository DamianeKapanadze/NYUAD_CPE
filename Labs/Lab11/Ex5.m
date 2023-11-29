M = randi([1, 100], 5, 5);

data = fopen('myrandsums.dat','w');

M = M.';
sum(M)

fprintf(data,'%d\n',sum(M));

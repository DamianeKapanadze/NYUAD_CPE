C = zeros(20,20);
C(:,:) = 250;

%sky
C(1:2,:) = 0;
C(3:4,:) = 20;

%ground
C(17:20,:) = 200;

%trr trunk
C(11:16, 8:12) = 190;

% leaves
a= 150;
C(10, 6:14) = a;
C(9, 7:13) = a;
C(8, 8:12) = a;
C(7, 9:11) = a;


% neeed different function
image(C, 'CDataMapping','scaled')
colorbar
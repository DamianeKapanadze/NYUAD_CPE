C = zeros(20,20,3);
C(:,:,:) = 255;

%sky
C(1:2,:,:) = 0;
C(3:4,:,:) = 0;

C(1:2,:,3) = 0.5;
C(3:4,:,3) = 1;

%ground
C(17:20,:,1) = 0;
C(17:20,:,2) = 0.5;
C(17:20,:,3) = 0.1;


%trr trunk
C(11:16, 8:12, 1) = 0.5;
C(11:16, 8:12, 2) = 0;
C(11:16, 8:12, 3) = 0;


% leaves
a=0;
C(10, 6:14, :) = a;
C(9, 7:13, :) = a;
C(8, 8:12, :) = a;
C(7, 9:11, :) = a;

a = 1;
C(10, 6:14, 2) = a;
C(9, 7:13, 2) = a;
C(8, 8:12, 2) = a;
C(7, 9:11, 2) = a;

%https://www.mathworks.com/matlabcentral/answers/342072-how-to-create-an-rgb-image

rgbImage = cat(3, C(:,:,1), C(:,:,2), C(:,:,3));

image(rgbImage)

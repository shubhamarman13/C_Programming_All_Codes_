/* CODE TO FIND THE QUADRANT */ 
//code to find the quadrant of x,y . input given by the user
#include <stdio.h>
main()
{int x,y,quad;
printf("Enter the value of x \n");
scanf("%d",&x);
printf("Enter the value of y\n",&y);
scanf("%d",&y);
 
if ((x>0)&&(y>0))
  quad=1;
else if ((x<0)&&(y>=0))
quad=2;
else if ((x<=0)&&(y<=0))
quad=3;
else
quad=4;
printf("The value  (%d,%d)lies on = Quadrant no.%d",x,y,quad);
}


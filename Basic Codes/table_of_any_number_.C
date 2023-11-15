/* CODE FOR THE TABLE OF GIVEN NUMBER USING FOR LOOP */
#include <stdio.h>
main()
{int a,b;
printf("enter the number whose table do you want to print \n");
scanf("%d",&a);
for (b=1;b<=10;b++)
printf("%d X %d=%d\n",a,b,(a*b));
}
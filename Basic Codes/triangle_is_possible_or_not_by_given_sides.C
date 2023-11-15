/* CODE TO FIND THAT THE TRIANGLE IS POSSIBLE OR NOT*/

#include <stdio.h>
main()
{float a,b,c;
printf("Enter the three  sides of a triangle\n");
scanf("%f\n%f\n%f",&a,&b,&c);
if ((a+b>c)&&(b+c>a)&&(a+c>b))
printf("%0.2f,%0.2f,%0.2f will form a triangle",a,b,c);
else
printf("%0.2f,%0.2f,%0.2f will not form a triangle",a,b,c)
}
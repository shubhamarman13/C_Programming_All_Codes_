 /*CODE FOR THE PELINDROME NUMBER */
// TO GET THE DETAIL OF LOGIC UNMUTE THE COMMENT GIVEN BELOW
#include <stdio.h>
void main()
{int num,var,y,sum=0;
printf("Enter the number \n"); 
scanf("%d",&num);
var=num;
while (num>0)
{
    y=num%10;
    sum=(sum*10)+y;
    num=num/10;    
}
// printf("%d\n",num);
// printf("%d\n",var);
// printf("%d\n",sum);
if (var==sum)
printf("%d is a pelindrome number",var);
else
printf("%d is not a pelindrone number",var);
}
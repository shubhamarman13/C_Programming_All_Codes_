#include <stdio.h>
main()
{char charecter,ascii;
printf("enter the char\n");
scanf("%c",&charecter);
ascii=("%d",charecter);
// printf("%d",ascii);
if ((ascii>=65)&&(ascii<=90))
printf("%c is a alphabate",charecter);
if  ((ascii<=57)&&(ascii>=48))
printf("%c is number",charecter);
if ((ascii>=97)&&(ascii<=122))
printf("%c is a alphabate",charecter);
else
printf("%c is a charector",charecter);
}
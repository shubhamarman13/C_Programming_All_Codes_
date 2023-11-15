// '''A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
// Ask user for their salary and year of service and print the net bonus amount '''

#include <stdio.h>
main()
{float salery , year ;
printf("Enter your salery\n");
scanf("%f",&salery);
printf("Enter the number of years in this company\n");
scanf("%f", &year);
if (year>=5)
printf("your salery after increament=%f",(salery+((salery/100)*5)));
else
printf("your salery is %f", salery);
}
#include <stdio.h>
#include <conio.h>
main()
{
  int time;
  float ave, num, sum = 0;
  printf("Enter the total number to be find the average\n");
  scanf("%d", &time);
  for (int i = 0; i < time; i++)
  {
    printf("Enter the %d number\n", i + 1);
    scanf("%f", &num);
    // stdin;
    sum = sum + num;
  }
  ave = sum / time;
  printf("The ave is %.2f", ave);
}
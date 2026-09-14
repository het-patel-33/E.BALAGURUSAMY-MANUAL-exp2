#include<stdio.h>

/* here instead of days the seconds are given and you need to 
convert it into hours,min,and seconds format */

int main()

{

    int seconds;
    int hours,minutes,remaining_seconds;

  printf("enter the number of seconds: ");
  scanf("%d",&seconds);

    hours=seconds/3600;
    remaining_seconds=seconds%3600;

    minutes=remaining_seconds/60;
    remaining_seconds=remaining_seconds%60;

   printf(" seconds = %dH:%dM:%dS\n", hours, minutes, remaining_seconds );

return 0;

}
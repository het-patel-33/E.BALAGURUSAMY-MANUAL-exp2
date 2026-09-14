#include <stdio.h>

/* make a program in which the total numbers of days are given and you need to cunvert 
that in perfect no of days ,year and month.*/

int main()

{

    int days;
    int years, months, remaining_days;

    printf("enter the number of days: ");
    scanf("%d",&days);

    years = days / 365;
    remaining_days = days % 365;

    months = remaining_days / 30;
    remaining_days = remaining_days % 30;

    printf(" days = %d years,%d months,%d days\n", years, months, remaining_days);

    return 0;
    
}
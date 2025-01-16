#include<stdio.h>
int main()
{
    int day,days,year,month,months;
    printf("Enter Number of Day: ");
    scanf("%d",&days);
    year = days/365;     
    months = days%365;
    month = months/30;
    day = months%30;
    printf("years=%d month=%d day=%d",year,month,day);
    return 0;

}
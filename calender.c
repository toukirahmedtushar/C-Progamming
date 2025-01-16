#include<stdio.h>
int main()
{
    
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    int days[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year, dayofweek=0,spacecounter=0;
    printf("Enter Your favourite Year: \n");
    scanf("%d",&year);

    printf("---------------Welcome To %d --------------",year);

    //check leap yerar
    if(year%400==0 || (year%4==0 && year%100 !=0))days[1]=29;
    //first day of year

    for(int i= 0; i<12; i++)
    { 
        printf("\n\n    -----------------%s-----------------\n\n",months[i]);
        printf("    Sun   Mon   Tue   Wed   Thu   Fri   Sat \n\n");

        for(spacecounter=1; spacecounter<=dayofweek; spacecounter++)printf("      ");
        for(int j=1; j<=days[i]; j++)
        {
            printf("%6d",j);
            dayofweek++;
            if(dayofweek>6)dayofweek=0,printf("\n\n");
        }
    }
    return 0;
    
}
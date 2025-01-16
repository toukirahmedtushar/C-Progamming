#include <stdio.h>
int main ()
{
    int n, num[10],i,average, sum=0;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    for(i=0; i<n; ++i)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&num[i]);
        sum += num[i];
    }

    printf("\n");

    for(i=0; i<n; ++i)
    {
        printf("Number %d :%d\n",i+1,num[i]);
    }
    average= sum/n;
    printf("\nSum of number:%d \nAverage Number: %d\n",sum,average);
    return 0;
}
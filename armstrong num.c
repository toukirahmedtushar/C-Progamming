#include <stdio.h>
#include <math.h>
int main()
{
    // determine Armstrong number
    int n, r, sum = 0;
    printf("Enter the number: ");
    scanf("%d", &n); // 153

    int m = n;
    while (m > 0)
    {
        r = m % 10;
        sum += round(pow(r, 3));
        m /= 10;
    }
     printf("%d\n", sum);
     if(sum==n)printf("%d is armstrong number.\n",n);
     else printf("%d is not  armstrong number.\n",n);
}
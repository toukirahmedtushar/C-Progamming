#include <stdio.h>

int factorial(int n) 
{
    int fact = 1;
    for(int i = n;i>=1;i--) fact *= i;
    return fact;
}

int main()
{
	int number,temp,fact,rem,sum =0;
    printf("Enter Number to check wheather given number is Strong or Not ");
    scanf("%d",&number);  //145      1!+4!+5!=145
    temp = number;
    while(number > 0)
    {
    	fact = 1;
    	rem = number%10;
        for(int i = rem;i>=1;i--) fact = fact*i;
        sum += fact;
        number /= 10;
    }
    if(temp == sum)
    {
        printf("%d is a Strong Number",temp);
    }
    else{
        printf("%d is not a Strong NUmber",temp);
    }
    printf("jfjfjfjfkj");
    return 0;
}
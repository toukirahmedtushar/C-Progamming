#include <stdio.h>

int main()
{

    int x;    
    
    printf("\nInput Your Number:");
    scanf("%d", &x);
    if (x == 0)
    {
        printf("\nExited");
        return 0;
    }
    // x & 1 ? printf("%d Is A Prime Number", x) : printf("%d This Is A Not Prime Number", x);
    // main();

    //for(int i= 2; i<= x/2; i++) 
    for(int i=2; i*i<=x; i++) //or
    {
        if(x%i == 0){
            printf("%d is not prime number",x);
            return 0;
            }
    }
    printf("%d is prime number ",x);
}
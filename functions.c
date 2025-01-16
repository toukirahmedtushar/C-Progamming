#include <stdio.h>

void isPrime(int x)
{
    x & 1 ? printf("\n%d is a prime number\n\n", x) : printf("%d is not a prime number\n", x);
}

void isOdd(int x)
{
    x % 2 != 0 ? printf("%d is a odd number\n\n", x) : printf("%d is even number\n", x);
}

void printSeries(int x)
{
    printf("Series of %d is:\n", x);
    for (int i = 1; i <= x; i++)
    {
        printf("%d ", i);
    }
}

int main()
{
    int x;
    system("cls");
    printf("Enter a number: ");
    scanf("%d", &x);
    isPrime(x);
    isOdd(x);
    printSeries(x);
    return 0;
}
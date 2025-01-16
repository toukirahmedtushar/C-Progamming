#include<stdio.h>
#include<math.h>
#define e 2.718281828459045

int main()
{
    double t;
    printf("Enter minutes to find the amount: ");
    scanf("%lf", &t);

    //double k = 0.0137;
    double k = 0.55;
    //double amount = 75-75*pow(e, -t*k);
    double amount = 80*(pow(e, -t*k));

    printf("The amount is: %lf", amount);
}
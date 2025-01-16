//swap two numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swapping\n");
    printf("a=%d\nb=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After swapping\n");
    printf("a=%d\nb=%d\n",a,b);
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int a,b,temp;
//     printf("Enter two numbers: ");
//     scanf("%d %d",&a,&b);
//     // temp = a;
//     // a = b;
//     // b = temp;
//     printf("After swapping: %d %d",a,b);
//     return 0;
// }

#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter number: ");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is biggest",a);
    }else{
        printf("%d is biggest",b);
    }
}

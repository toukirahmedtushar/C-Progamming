
#include<stdio.h>
int main(){
   int a,b,i,gcd;
   printf("Enter two number: ");
   scanf("%d %d",&a ,&b);
   for(i=1; i<=a; i++)
   {
    if(a%i==0 && b%i == 0 )
    {
        gcd= i;
    }
   }
   int lcm = (a*b)/gcd;
   
    printf("GCD=%d, LCM=%d",gcd,lcm);
   
}

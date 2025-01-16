#include<stdio.h>
#include<math.h>
int main()
{ float a,b,c,d,e,p,t,k,x;

printf("enter how many hour: ");
scanf("%f",&a);//1
printf("enter how many standers of the bacteria are observed in the culture in %.0f hour: ",a);
scanf("%f",&b);//1000
printf("enter hour: ");
 scanf("%f",&e);  //4
printf("enter the amount of bacteria after %.0f hours : ",e);
scanf("%f",&d);//3000
printf("enter hour(t=0 or you want to know): ");
scanf("%f",&t);

x=d/b;
k=log(x)/(e-a);

c=b/exp(k);

p=c*exp(k*t);

printf("the value of k is: %.3f\n",k);
printf("the value of c is: %.2f\n",c);

printf("the value of p(%.0f) is: %.2f\n",t,p);

}
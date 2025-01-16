#include <stdio.h>
int main()
{
    // int f1=0,f2=1,f3=0,n;
    // printf("Enter the number: ");
    // scanf("%d", &n);
    // printf("%d %d ",f1 ,f2);
    // for(int i=3; i<=n; i++){
    //     f3=f1+f2;
    //     printf("%d ",f3);
    //     f1=f2;
    //     f2=f3;
    // }

    // int first = 0, second = 1, n, fabo, count = 0;
    // scanf("%d", &n);

    // while (count<n)
    // {
    //     if(count<=1){
    //         fabo=count;
    //     }
    //     else{
    //         fabo= first+second;
    //         first= second;
    //         second=fabo;
    //     }
    //     printf("  %d",fabo);
    //     count++;
    // }



//recurstion
 int i;
 for (i = 0; i < 10; i++) {
 printf("%d\t\n", fibonacci(i));
 }
 return 0;
}


   
int fibonacci(int i) {
 if(i == 0) {
 return 0;
 }
 if(i == 1) {
 return 1;
 }
 return fibonacci(i-1) + fibonacci(i-2);
}


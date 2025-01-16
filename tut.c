#include<stdio.h>
int main(){
    int a = 50;

    int *ptr;

    ptr = &a;

    *ptr = 60;

    printf("%d\n", a);
    return 0;

}
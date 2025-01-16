#include<stdio.h>
int main(){
    int i,j;
    i=5;
    j= ++i + ++i + ++i;
    printf("%d %d",i,j);
    return 0;
}

// output 8 22


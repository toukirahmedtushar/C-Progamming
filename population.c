#include<stdio.h> 
int main(){

    float pop =70000, year=30;
    float add =0;
    for (int i=1; i<=year; i++){
        
        add = pop*0.0227;
        pop = pop + add;
        add =0;
        printf("i %d  oo %.2f\n",i,pop);
 
    }
    printf("%.2f",pop);
}
#include<stdio.h>
int main()
{
    char str1[60];
    char revstr[60];

    char *stptr= str1;
    char *rvptr= revstr;
    int i =-1;
    printf("Input string: \n");
    scanf("%s",str1);
    while(*stptr){
        stptr++;
        i++;
    //printf("%c\n",*stptr);
    }
    printf("%d",i);
    while(i>=0){
        stptr--;
        *rvptr = *stptr;
        rvptr++;
        --i;
        //printf("%c\n",*stptr);
    }
    *rvptr='\0';
    printf(" %s",revstr);
}
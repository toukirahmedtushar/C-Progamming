#include <stdio.h>

int main()
{
    int count=1;
    char a[50];
    char *ptr=a;
    
    scanf("%[^\n]s", a);
    while(*ptr){
        if(*ptr==' ' && *ptr-1!=' '){
            count++;
        }
        ptr++;
        //count++;
    }
    printf("%d",count);
     return 0;
}
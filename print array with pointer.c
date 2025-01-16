#include <stdio.h>
int main()
{
    char arr[] = {'g','h','j','d'};
    char *ptr =arr;
    int i=0;
    while(*ptr){
        //printf("%c ", *ptr);
        ptr++;
        i++;
    }
    printf("%d", i);
    for(int j=0; j<i-3;j++){
        printf("%c\n",arr[j]);
    }

}

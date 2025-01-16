#include <stdio.h>
int main(){
    char arr[10];
    printf("Enter String:\n");
    scanf("%[^\n]s", &arr);
    int len = strlen(arr);
    int pos= -1;
    
    char key;
    printf("Enter Searching Letter: ");
    scanf(" %c",&key);

    for(int i=0;i<len;i++){
       if(key== arr[i]){
        pos = i;
        printf("%c is %d number index in array.",key,i+1);
        break;
       }
    }
    if(pos== -1)printf("%c is not present in the string.");
    return 0;

}

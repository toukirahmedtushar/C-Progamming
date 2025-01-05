
#include <stdio.h>
int main() {
    int arr[5];
    int n,x=0;
    printf("Enter Number: \n");
    for(int i=0; i<5; i++) {
        scanf("%d",&n);
        arr[i]=n;
        x++;
    }
    printf("Array: \n");
    printf("Reverased Array: \n");
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n Reverased Array: \n");
    for(int i=x-1; i>=0; i--) {
        printf("%d ", arr[i]);
    }
}

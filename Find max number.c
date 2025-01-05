#include <stdio.h>
int main()
{
    int arr[10];
    //input numbe by user
    printf("Enter numbers: \n");
    for(int j=0; j<5; j++)
    {
        scanf("%d", &arr[j]);
    }

    int max_number = arr[0];
    //find max number
    for(int i=1; i<5 ; i++)
    {
        if(max_number<arr[i])
        {
            max_number = arr[i];
        }
    }
    printf("\n%d is max number this array",max_number);
}

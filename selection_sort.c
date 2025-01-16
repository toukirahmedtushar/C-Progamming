#include <stdio.h>
int main()
{
    int i, j, arr_size;
    printf("Enter arry size: ");
    scanf("%d", &arr_size);
    int arr[arr_size];
    //----input numbe by user---------
    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter %d number index element: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n-----Before Sort---------\n");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    //---sorting-------------------------
    for (i = 0; i < arr_size; i++)
    {
        int min = arr[i];
        int k= -1;
        for (j = i + 1; j < arr_size; j++)
        {
            if (arr[j] < min){
                k=j;
                min = arr[j];
            }
        }
        int temp =arr[i];
        arr[i] = min;
        arr[k] = temp;
    }
    printf("\n-----After Sort---------\n");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
}
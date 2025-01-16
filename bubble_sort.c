#include <stdio.h>
int main()
{
    int i, j, arr_size;
    printf("Enter arry size: ");
    scanf("%d", &arr_size);
    int arr[arr_size];
    // input numbe by user
    for (int i = 0; i < arr_size; i++)
    {
        printf("Enter %d number index element: ", i);
        scanf("%d", &arr[i]);
    }
    printf("\n-----Before Sort---------\n");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);

    for (i = 0; i < arr_size; i++)
    {
        int min_number = arr[i];
        for (j = i + 1; j < arr_size; j++)
        {
            if (arr[j] < min_number)
            {
                int temp = min_number;
                min_number = arr[j];
                arr[j] = temp;
            }
        }
        arr[i] = min_number;
    }
    printf("\n-----After Sort---------\n");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
}
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
    
    for (i = 1; i < arr_size; i++)
    {
        int key= arr[i];
        for (j = i - 1; j >= 0;j--)
        {
            if (key<arr[j]) arr[j+1] = arr[j];
            else break;
        }
        arr[j+1]= key;
    }

    printf("\n-----After Sorting---------\n");
    for (i = 0; i < arr_size; i++)
        printf("%d ", arr[i]);
}

// for (i = 1; i < arr_size; i++)
//     {
//         int key= arr[i];
//         j = i-1;
//         while(j >=0 && key<arr[j])
//         {
//             arr[j+1] = arr[j];
//             j = j-1;
//         }
//         arr[j+1]= key;
//     }
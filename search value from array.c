#include <stdio.h>
int main()
{
    int size, i;
    printf("Enter Array size: ");
    scanf("%d", &size);
    int arr[size];
    for (i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int beg = 0, end = size;
    int pos = -1;
    int key;
    printf("Search value: ");
    scanf("%d", &key);

    while (beg <= end)
    {
        int mid = (beg + end) / 2;
        if (key == arr[mid])
        {
            printf("%d is %d number index", key, mid + 1);
            pos = mid;
            break;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else
        {
            beg = mid + 1;
        }
    }
    if (pos == -1)
        printf("value is not present in the array");
    return 0;
}
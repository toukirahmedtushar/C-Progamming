#include <stdio.h>
void swap(int *a, int *b)

{

    int t = *a;

    *a = *b;

    *b = t;
}

int Partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++)
    {
        if (pivot >= arr[j])
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quick_sort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = Partition(arr, low, high);
        quick_sort(arr, low, pi - 1);
        quick_sort(arr, pi + 1, high);
    }
}

void printArray(int arr[], int size)

{

    int i;

    for (i = 0; i < size; i++)

        printf("%d ", arr[i]);

    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 5, 4, 6, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    quick_sort(arr, 0, n - 1);

    printArray(arr, n);
    return 0;
}
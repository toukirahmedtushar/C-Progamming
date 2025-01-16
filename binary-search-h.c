#include <stdio.h>

int main()
{
    char arr[10];
    printf("Enter String\n");
    scanf("%[^\n]s", &arr);
    int len = strlen(arr);
    int pos = -1;
    printf("len %d",len);

    char key;
    printf("Enter Searching Letter: ");
    fflush(stdin);
    scanf("%c", &key);

    int beg = 0, end = len;
    while (beg <= end)
    {
        int  mid = (beg + end) / 2;
        if (arr[mid] == key)
        {
            pos = mid;
            printf("%c is %d number index in array string", key, mid);
            break;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }else
        {
            beg = mid + 1;
        }
    }
    if (pos == -1)printf("%c is not present in the string.", key);
    return 0;
}

 
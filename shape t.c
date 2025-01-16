#include <stdio.h>

int main()
{
    int n, row = 0, k;
    printf("Enter the row Number: ");
    scanf("%d", &n);
    
    while (row <= n*2)
    {
        printf("\n");
        for (int i = 0; i<=k; i++) printf("*");
        
        if (row < n)
        {
            k++;
        }
        else
        {
            k--;
        }
        row++;
    }
    return 0;
}

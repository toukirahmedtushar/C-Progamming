#include <stdio.h>

int main()
{
    int i, j, n, m;

    printf("Enter the number of rows and columns of matrix\n");
    scanf("%d %d", &n, &m);
    int first[n][m], second[n][m], sum[n][m];
    printf("Enter the elements of first matrix\n");
    for (i = 0; i < n; i++)
    {
        for (j =0 ; j < m; j++)
        {
            scanf("%d", &first[i][j]);
        }
            
    }
    printf("Enter the elements of second matrix\n");

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &second[i][j]);
        }
            
    }
    printf("Sum of entered matrices:-\n");

    for (i = 0; i < n; i++)
    { 
        for (j = 0; j < m; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
            printf(" %d", sum[i][j]);
        }
        printf("\n");
    }

}
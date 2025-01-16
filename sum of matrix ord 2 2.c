#include <stdio.h>
int main()
{
    int i, j, order;
    printf("Enter order: ");
    scanf("%d",&order);

    int size_row = order;
    int size_col = order;
    int 
        matrix_1[size_row][size_col],
        matrix_2[size_row][size_col],
        matrix_3[size_row][size_col];

    for(i = 1; i <= size_row; ++i)
    {
        for(j = 1; j <= size_col; ++j)
        {
            printf("First Matrix - %d %d :",i,j);
            scanf("%d", &matrix_1[i][j]);
        }
    }
    for(i = 1; i <= size_row; ++i)
    {
        for(j = 1; j <= size_col; ++j)
        {
            printf("Second Matrix - %d %d :",i,j);
            scanf("%d", &matrix_2[i][j]);
        }
    }
    //print
    for(i = 1; i <= size_row; ++i)
    {
        for(j = 1; j <= size_col; ++j)
        {
           matrix_3[i][j] = matrix_1[i][j] + matrix_2[i][j];
           printf("%d ",matrix_3[i][j]);
        }
        printf("\n");
    }
}
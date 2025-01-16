#include <stdio.h>

int main()
{

    int n, row = 0, range;
    printf("Inter Row Number: ");
    scanf("%d", &n);

    range = n * 2;
    int k = 0;
    int l = n;
    int i = 2;

    system("cls");

    while (row <= n)
    {
        while (row <= n)
        {

            printf("\n");

            for (int col = 0; col <= 2; col++) printf("    ");

            for (int col = 0; col <= 2; col++) printf(".");

            for (int col = 0; col <= k; col++) printf(" ");
            for (int col = 0; col <= 1; col++) printf(".");
            for (int col = 0; col <= l; col++)  printf(" ");

            for (int col = 0; col <= l; col++) printf(" ");
            for (int col = 0; col <= 1; col++) printf(".");
            for (int col = 0; col <= k; col++) printf(" ");

            for (int col = 0; col <= 2; col++) printf(".");

            if (row < n)
            {
                k++, i = 2, l--;
            }
            else
            {
                k--, i = 2, l++;
            }
            row++;
        }
        printf("\n");
        for (int col = 0; col <= 2; col++) printf(" \n");
        for (int col = 0; col <= n * 2 + 23; col++)  printf("*");
        printf("\" Happy FIRST DAY of NEW YERA to MUSHFIKUR RAHMAN \" ");
        for (int col = 0; col <= 2; col++) printf(" \n");
        // for (int col = 0; col <= n*2+23 ; col++) printf(" \n");
    }
    return 0;
}
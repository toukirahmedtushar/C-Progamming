#include <stdio.h>
                                // 121 reverse 121 is palindrom
int pailndrom(char *str)
{
    char *ptr = str;
    int i = -1;
    int j = 0;

    while (*ptr)
    {
        ptr++;
        i++;
    }

     while (i >= 0)
    {
        ptr--;
        if(*ptr != str[j++]) return 0;
        i--;
    }

    return 1;
}

int main()
{

    char str[50];

    printf("enter a word: \n");
    scanf("%[^\n]", &str); // 123

    if (pailndrom(str) == 1)
        printf("Palindrom");
    else
        printf("Not a palindrom");
}

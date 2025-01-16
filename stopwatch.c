#include <stdio.h>
#include <windows.h>
int main()
{
    int h, m, s, ms;
    printf("\v**Press Enter to Start Stopwach** ");
    getchar();
    s = 0;
    h = 0;
    m = 0;
    ms = 1;
    while (1)
    {
        ms++;
        if (ms > 99)
        {
            s++;
            ms = 0;
        }
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        printf("Clock: ");
        printf("%.2d: %.2d: %.2d: %.2d", h, m, s, ms);
        usleep(1);
        system("cls");
    }
}
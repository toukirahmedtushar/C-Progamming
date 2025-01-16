#include <stdio.h>
#include <windows.h>
int main()
{
    int h, m, s;
    // int d = 1000;
    printf("Set Time: hour- min- sec: ");
    scanf("%d %d %d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    {
        printf("Error");
    }
    while (1)
    {
        s++;
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
        if (h > 12)
        {
            h = 1;
        }
        printf("Clock: ");
        printf("h-%.2d m-%.2d s-%.2d", h, m, s);
        sleep(1);
        system("cls");
    }
}
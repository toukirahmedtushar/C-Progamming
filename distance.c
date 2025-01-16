#include<stdio.h>
#include<math.h>
int main()
{
    int x[3][3],dis;
    for(int i=1; i<=2; i++)
    {
        printf("Enter %d point number: \n",i);
        for(int j=1; j<=2; j++)
        {
            printf(" x%d%d: ",i,j);
            scanf("%d",&x[i][j]);
            //printf("\n");
        }
    }
    dis=sqrt(pow((x[1][1]-x[2][1]),2)+pow((x[1][2]-x[2][2]),2));
    printf("distance %d",dis);
}
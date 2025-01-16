#include<stdio.h>
int reverse(int *ptrx,int n)
{
    int i,j,temp,position;
    for(i=0,j=n-1;i<n/2;i++,j--)
    {
        temp= *(ptrx+i);
        *(ptrx+i) = *(ptrx+j);
        *(ptrx+j) = temp;
    }
}
int main()
{
    int n;
    printf("Enter the number of input: ");
    scanf("%d",&n);
    int arr[n], i;
    for(i=0; i<n; i++)
    {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    int *ptr = arr;

    reverse(ptr,n);

    for(i=0; i<n; i++)
    {
        arr[i] = *(ptr+i);
        printf("arr[%d] = %d\n",i,arr[i]);
    }
}
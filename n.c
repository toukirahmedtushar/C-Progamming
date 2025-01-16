#include<stdio.h>

int main()
{
  int n, k = 0, row = 0;
  printf("Enter number of rows: ");
  scanf("%d", &n);

  while(row <= n*2)
  {

    printf("\n");
    
    for(int i=0; i<=k; i++) printf("*");

    if(row < n) k++;
    else k--;

    row++; 

  }
} 
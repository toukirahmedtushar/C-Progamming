#include <stdio.h>
int main()
{
  int num,n,ecount=1,ocount=1;
  printf("Enter how many number of values you would like to check: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++)
  { 
    printf("Enter a value: ");
    scanf("%d", &num); 
    if(num % 2 == 0) 
    {
        printf ("%d is an even number\n", num);
        ecount++;
    }  
    else 
    {
        printf ("%d is an odd number\n", num);
        ocount++;
    }
  }
  printf("Even count in the list of %d numbers is %d\n", n, ecount);
  printf("Odd count in the list of %d numbers is %d\n", n, ocount);
  return 0;
}
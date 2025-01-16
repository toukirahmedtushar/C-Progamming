#include <stdio.h>

int main () {

  int n,row = 0,range;

  printf("Inter Row Number: ");
  scanf("%d", &n);
  range = n*2;
  int k = n;
  int i= 0;
  int l= 2;
  int z=range;

 while(row <= range) {
    printf("\n");

    for(int col=0; col<=z+14; col++) printf(".");
    printf("\n");
    for(int col=0; col<=z+14; col++) printf(".");
    printf("\n");
    for(int col=0; col<=z+14; col++) printf(".");

       while(row <= range)
       {
        printf("\n");
        
        for(int col=1; col<=k+4; col++) printf(".");
        for(int col=0; col<=l; col++) printf(" ");
        for(int col=0; col<=i; col++) printf(".");
        for(int col=0; col<=l; col++) printf(" ");
        for(int col=1; col<=k+4; col++) printf(".");

         for(int col=0; col<=l; col++) printf(" ");

        for(int col=0; col<=k; col++) printf(" ");
        for(int col=0; col<=i; col++) printf(".");
        for(int col=0; col<=k; col++) printf(" ");

        if(row < n) { l=2; k--; i+=2; } else { l=2; k++; i-=2; }
        row++;
  
        }

  printf("\n");
  for(int col=0; col<=z+14; col++) printf(".");
  printf("\n");
  for(int col=0; col<=z+14; col++) printf(".");
  printf("\n");
  for(int col=0; col<=z+14; col++) printf(".");
}

  while(row <= range) {

    printf("\n");
    
    for(int col=0; col<=k; col++) printf(" ");
    for(int col=0; col<=l; col++) printf(".");
    for(int col=0; col<=k; col++) printf(" ");

    if(row < n) { l+=2; k--; } else { l-=2; k++; }
    row++;
    
  }
}
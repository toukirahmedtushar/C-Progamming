#include <stdio.h>

int main() {
  int x = 5;
  int y = 4;
  int z;
  // Returns 1 (true) because 5 is greater than 3 AND 5 is less than 10
  printf("%d \n", x > 4 && x < 10);
  printf("%d\n",y>3 && y<=4);
  printf("%d\n",y>=4 || y<4);
  printf("%d\n",!(y>=4 || y<4));
  printf("ENTER THE VALUE:\n");
  scanf("%d",&z);
  printf("this value is : %d",z);

  return 0;
}
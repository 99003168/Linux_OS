#include<stdio.h>
#include "fun.h"
int main() 
{
  int x1, x2, x3, x4, x5;
  x1 = 10;
  x2 = 20;
  x3 = 4;
  x4 = sum(x1,x2);
  x5 = square(x3);
  printf("sum = %d\n",x4);
  printf("square = %d\n",x5);
  return 0;
}

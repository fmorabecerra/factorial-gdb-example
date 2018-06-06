#include <stdio.h>
#include "cs50.h"

int main(void)
{
  printf("Hola, world!\n");

  // factorials aren't defined for the negative integers
  int num;
  do
  {
    printf("Please enter a positive integer: ");
    num = get_int();
  }
  while(num<0);

  int factorial = 1;
  for (int i = 1; i <= num; i++)
    factorial = factorial * i;

  printf("%d! = %d\n", num, factorial);

  return 0;

}

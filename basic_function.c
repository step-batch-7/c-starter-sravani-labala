#include <stdio.h>

int isEven(int);
int isOdd(int);

int isEven(int num)
{
  // return (num % 2) == 0;
  return !(num & 1);
}

int isOdd(int num)
{
  return !isEven(num);
}

int main(void)
{
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  isEven(num) ? printf("%d is even\n", num) : printf("%d is not even\n", num);
  isOdd(num) ? printf("%d is odd\n", num) : printf("%d is not odd\n", num);
  return 0;
}
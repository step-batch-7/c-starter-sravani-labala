#include <stdio.h>

int factorial(int num);

// calculating upto 12 numbers
int factorial(int num)
{
  return (num == 0) ? 1 : (num * factorial(num - 1));
}

int main(void)
{
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  printf("factorial of %d is %d\n", num, factorial(num));
  return 0;
}
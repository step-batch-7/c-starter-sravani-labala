#include <stdio.h>

int factorial(int num);
int fibonacci(int upto);

// calculating upto 12 numbers
int factorial(int num)
{
  return (num == 0) ? 1 : (num * factorial(num - 1));
}

int fibonacci(int upto)
{
  int previousTerm = 0, currentTerm = 1, temp;
  while (upto)
  {
    printf("%d ", previousTerm);
    temp = previousTerm;
    previousTerm = currentTerm;
    currentTerm = temp + previousTerm;
    upto--;
  }
  return 0;
}

int main(void)
{
  int num;

  printf("Enter a number\n");
  scanf("%d", &num);
  printf("factorial of %d is %d\n", num, factorial(num));
  printf("The fibonacci series upto %d are as follows\n", num);
  fibonacci(num);

  return 0;
}
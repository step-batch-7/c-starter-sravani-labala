#include <stdio.h>

int factorial(int num);
int fibonacci(int upto);
int odd_number_series(int upto);

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

int odd_number_series(int upto)
{
  int num = 1;
  while (upto)
  {
    (num % 2 != 0) && printf("%d ", num);
    num++;
    upto--;
  }
  return 0;
}

int main(void)
{
  int num1;

  printf("Enter a number\n");
  scanf("%d", &num1);
  printf("factorial of %d is %d\n", num1, factorial(num1));
  printf("The fibonacci series upto %d are as follows\n", num1);
  fibonacci(num1);
  printf("\nThe odd number series upto %d is as follows\n", num1);
  odd_number_series(num1);

  return 0;
}
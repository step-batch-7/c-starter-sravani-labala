#include <stdio.h>

int factorial(int num);
int fibonacci(int upto);
int odd_number_series(int upto);
int even_number_series(int upto);
int sum_of_n_numbers(int start, int end);
int product_of_n_numbers(int start, int end);
int sum_of_even_numbers_between_n(int start, int end);
int odd_numbers_in_reverse_order(int from);

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

int even_number_series(int upto)
{
  int num = 1;
  while (upto)
  {
    (num % 2 == 0) && printf("%d ", num);
    num++;
    upto--;
  }
  return 0;
}

int sum_of_n_numbers(int start, int end)
{
  int sum = 0;
  for (int i = start; i <= end; i++)
  {
    sum += i;
  }
  return sum;
}

int product_of_n_numbers(int start, int end)
{
  int product = 1;
  for (int i = start; i <= end; i++)
  {
    product *= i;
  }
  return product;
}

int sum_of_even_numbers_between_n(int start, int end)
{
  int sum = 0;
  for (int i = start; i <= end; i++)
  {
    if (i % 2 == 0)
    {
      sum += i;
    }
    // (i % 2 == 0) && (sum += i);
  }
  return sum;
}

int odd_numbers_in_reverse_order(int from)
{
  for (int num = from; num > 0; num--)
  {
    (num % 2 != 0) && printf("%d ", num);
  }
  return 0;
}

int main(void)
{
  int num1, num2;

  printf("Enter a number\n");
  scanf("%d", &num1);

  printf("factorial of %d is %d\n", num1, factorial(num1));

  printf("The fibonacci series upto %d are as follows\n", num1);
  fibonacci(num1);
  printf("\n");

  printf("The odd number series upto %d is as follows\n", num1);
  odd_number_series(num1);
  printf("\n");

  printf("The even number series upto %d is as follows\n", num1);
  even_number_series(num1);
  printf("\n");

  printf("The odd number series in reverse order from %d is as follows\n", num1);
  odd_numbers_in_reverse_order(num1);
  printf("\n");

  printf("Enter two limits to calculate the sum and product between them (ascending order)\n");
  scanf("%d %d", &num1, &num2);
  printf("The sum between the limits %d and %d is %d\n", num1, num2, sum_of_n_numbers(num1, num2));
  printf("The product between the limits %d and %d is %d\n", num1, num2, product_of_n_numbers(num1, num2));
  printf("The sum of even numbers between %d and %d is %d\n", num1, num2, sum_of_even_numbers_between_n(num1, num2));

  return 0;
}
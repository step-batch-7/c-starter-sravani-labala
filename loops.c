#include <stdio.h>

unsigned int factorial(int num);
int fibonacci(int upto);
int odd_number_series(int upto);
int even_number_series(int upto);
long int sum_of_n_numbers(int start, int end);
long int product_of_n_numbers(int start, int end);
long int sum_of_even_numbers_between_n(int start, int end);
int odd_numbers_in_reverse_order(int from);
int odd_numbers_between_n(int start, int end);
int nth_number_between_n(int nth, int start, int end);
int multiplication(int num, int upto);

unsigned int factorial(int num)
{
  if (num == 0)
  {
    return 1;
  }
  return num * factorial(num - 1);
  // return (num == 0) ? 1 : (num * factorial(num - 1));
}

int fibonacci(int upto)
{
  int previous_term = 0, current_term = 1, temp;
  while (upto)
  {
    printf("%d ", previous_term);
    temp = previous_term;
    previous_term = current_term;
    current_term = temp + previous_term;
    upto--;
  }
  return 0;
}

int odd_number_series(int upto)
{
  int num = 1;
  while (upto)
  {
    if (num % 2)
    {
      printf("%d ", num);
    }
    // (num % 2) && printf("%d ", num);
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
    if (num % 2 == 0)
    {
      printf("%d ", num);
    }
    // (num % 2 == 0) && printf("%d ", num);
    num++;
    upto--;
  }
  return 0;
}

long int sum_of_n_numbers(int start, int end)
{
  int sum = 0;
  if (start > end)
  {
    int temp = end;
    end = start;
    start = temp;
  }
  for (int num = start; num <= end; num++)
  {
    sum += num;
  }
  return sum;
}

long int product_of_n_numbers(int start, int end)
{
  int product = 1;
  if (start > end)
  {
    int temp = end;
    end = start;
    start = temp;
  }
  for (int num = start; num <= end; num++)
  {
    product *= num;
  }
  return product;
}

long int sum_of_even_numbers_between_n(int start, int end)
{
  int sum = 0;
  if (start > end)
  {
    int temp = end;
    end = start;
    start = temp;
  }
  for (int num = start; num <= end; num++)
  {
    if (num % 2 == 0)
    {
      sum += num;
    }
    // (i % 2 == 0) && (sum += i);
  }
  return sum;
}

int odd_numbers_in_reverse_order(int from)
{
  for (int num = from; num > 0; num--)
  {
    if (num % 2)
    {
      printf("%d ", num);
    }
    // (num % 2 != 0) && printf("%d ", num);
  }
  return 0;
}

int odd_numbers_between_n(int start, int end)
{
  if (start > end)
  {
    int temp = end;
    end = start;
    start = temp;
  }
  for (int num = start; num <= end; num++)
  {
    if (num % 2)
    {
      printf("%d ", num);
    }
    // (num % 2 != 0) && printf("%d ", num);
  }
  return 0;
}

int nth_number_between_n(int nth, int start, int end)
{
  if (start > end)
  {
    int temp = end;
    end = start;
    start = temp;
  }
  for (int num = start; num <= end; num += nth)
  {
    printf("%d ", num);
  }
  return 0;
}

int multiplication(int num, int upto)
{
  for (int i = 1; i <= upto; i++)
  {
    printf("%d * %d = %d\n", num, i, num * i);
  }
  return 0;
}

int main(void)
{
  int num1, num2, num3;

  printf("Enter a number\n");
  scanf("%d", &num1);

  printf("factorial of %d is %u\n", num1, factorial(num1));

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

  printf("Enter two numbers\n");
  scanf("%d %d", &num1, &num2);
  printf("The sum between the limits %d and %d is %ld\n", num1, num2, sum_of_n_numbers(num1, num2));
  printf("The product between the limits %d and %d is %ld\n", num1, num2, product_of_n_numbers(num1, num2));
  printf("The sum of even numbers between %d and %d is %ld\n", num1, num2, sum_of_even_numbers_between_n(num1, num2));

  printf("The odd numbers between %d and %d is as follows\n", num1, num2);
  odd_numbers_between_n(num1, num2);
  printf("\n");

  printf("Enter nth digit and limits to print the nth digit\n");
  scanf("%d %d %d", &num1, &num2, &num3);
  printf("The sequence of %d digit between %d and %d is as follows\n", num1, num2, num3);
  nth_number_between_n(num1, num2, num3);
  printf("\n");

  printf("Enter m and n for multiplication table\n");
  scanf("%d %d", &num1, &num2);
  multiplication(num1, num2);

  return 0;
}
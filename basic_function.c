#include <stdio.h>

int is_even(int num);
int is_odd(int num);
int square(int);
int cube(int);

int is_even(int num)
{
  return (num % 2) == 0;
  // return !(num & 1);
}

int is_odd(int num)
{
  return !is_even(num);
}

int square(int num)
{
  return num * num;
}

int cube(int num)
{
  return square(num) * num;
}

int main(void)
{
  int num;
  printf("Enter a number\n");
  scanf("%d", &num);
  printf("%d is %s\n", num, is_even(num) ? "even" : "not even");
  printf("%d is %s\n", num, is_odd(num) ? "odd" : "not odd");
  printf("square of %d is %d\n", num, square(num));
  printf("cube of %d is %d\n", num, cube(num));
  return 0;
}
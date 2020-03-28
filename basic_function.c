#include <stdio.h>

int isEven(int);
int isOdd(int);
int square(int);
int cube(int);

int isEven(int num)
{
  return (num % 2) == 0;
  // return !(num & 1);
}

int isOdd(int num)
{
  return !isEven(num);
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
  isEven(num) ? printf("%d is even\n", num) : printf("%d is not even\n", num);
  isOdd(num) ? printf("%d is odd\n", num) : printf("%d is not odd\n", num);
  printf("square of %d is %d\n", num, square(num));
  printf("cube of %d is %d\n", num, cube(num));
  return 0;
}
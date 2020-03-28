#include <stdio.h>

int is_even(int num);
int is_odd(int num);
int square(int num);
int cube(int num);
float convert_fahrenheit_to_centigrade(float fahrenheit);
float convert_centigrade_to_fahrenheit(float centigrade);

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

float convert_fahrenheit_to_centigrade(float fahrenheit)
{
  return (fahrenheit - 32) * 5 / 9;
}

float convert_centigrade_to_fahrenheit(float centigrade)
{
  return ((centigrade * 9) / 5) + 32;
}

int main(void)
{
  int num;
  float temperature;
  printf("Enter a number\n");
  scanf("%d", &num);
  printf("%d is %s\n", num, is_even(num) ? "even" : "not even");
  printf("%d is %s\n", num, is_odd(num) ? "odd" : "not odd");
  printf("square of %d is %d\n", num, square(num));
  printf("cube of %d is %d\n", num, cube(num));
  printf("Enter the temperature\n");
  scanf("%f", &temperature);
  printf("%f fahrenheit converted to centigrade is %f\n", temperature, convert_fahrenheit_to_centigrade(temperature));
  printf("%f centigrade converted to fahrenheit is %f\n", temperature, convert_centigrade_to_fahrenheit(temperature));
  return 0;
}
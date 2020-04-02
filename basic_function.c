#include <stdio.h>
#include <math.h>

unsigned char is_even(int num);
unsigned char is_odd(int num);
long int square(int num);
long int cube(int num);
float convert_fahrenheit_to_centigrade(float fahrenheit);
float convert_centigrade_to_fahrenheit(float centigrade);
int greatest_of_three(int num1, int num2, int num3);
float average_of_three(int num1, int num2, int num3);
float simple_interest(long int principle, int time, float rate);
float compound_interest(long int principle, int time, float rate);
int gcd(int num1, int num2);
int lcm(int num1, int num2);

unsigned char is_even(int num)
{
  return (num % 2) == 0;
  // return !(num & 1);
}

unsigned char is_odd(int num)
{
  return !is_even(num);
}

long int square(int num)
{
  return num * num;
}

long int cube(int num)
{
  return square(num) * num;
}

float convert_fahrenheit_to_centigrade(float fahrenheit)
{
  return ((fahrenheit - 32) * 5) / 9;
}

float convert_centigrade_to_fahrenheit(float centigrade)
{
  return ((centigrade * 9) / 5) + 32;
}

int greatest_of_three(int num1, int num2, int num3)
{
  if (num1 > num2)
  {
    return num1 > num3 ? num1 : num3;
  }
  return num2 > num3 ? num2 : num3;
  // return (num1 > num2) ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
}

float average_of_three(int num1, int num2, int num3)
{
  float sum = num1 + num2 + num3;
  return sum / 3;
}

float simple_interest(long int principle, int time, float rate)
{
  return (principle * time * rate) / 100;
}

float compound_interest(long int principle, int time, float rate)
{
  return principle * (pow((1 + rate / 100), time));
}

int gcd(int num1, int num2)
{
  if (num2 == 0)
  {
    return num1;
  }
  return gcd(num2, num1 % num2);
  // return num2 == 0 ? num1 : gcd(num2, num1 % num2);
}

int lcm(int num1, int num2)
{
  return (num1 * num2) / gcd(num1, num2);
}

int main(void)
{
  int number1, number2, number3, time;
  float temperature, rate;
  long int principle;

  printf("Enter a number\n");
  scanf("%d", &number1);
  printf("%d is %s\n", number1, is_even(number1) ? "even" : "not even");
  printf("%d is %s\n", number1, is_odd(number1) ? "odd" : "not odd");
  printf("square of %d is %ld\n", number1, square(number1));
  printf("cube of %d is %ld\n", number1, cube(number1));

  printf("Enter the temperature\n");
  scanf("%f", &temperature);
  printf("%f fahrenheit converted to centigrade is %f\n", temperature, convert_fahrenheit_to_centigrade(temperature));
  printf("%f centigrade converted to fahrenheit is %f\n", temperature, convert_centigrade_to_fahrenheit(temperature));

  printf("Enter three numbers for finding the greatest and also the average\n");
  scanf("%d %d %d", &number1, &number2, &number3);
  printf("The gretest among %d, %d, %d is %d\n", number1, number2, number3, greatest_of_three(number1, number2, number3));
  printf("The average of %d, %d, %d is %f\n", number1, number2, number3, average_of_three(number1, number2, number3));

  printf("Enter principle, time and rate of interest to calculate simple interest\n");
  scanf("%ld %d %f", &principle, &time, &rate);
  printf("simple interest of principle %ld with rate of interest %f within time %d is %f\n", principle, rate, time, simple_interest(principle, time, rate));
  printf("compound interest of principle %ld with rate of interest %f within time %d is %f\n", principle, rate, time, compound_interest(principle, time, rate));

  printf("Enter numbers to find gcd and lcm\n");
  scanf("%d %d", &number1, &number2);
  printf("gcd of %d and %d is %d\n", number1, number2, gcd(number1, number2));
  printf("lcm of %d and %d is %d\n", number1, number2, lcm(number1, number2));

  return 0;
}
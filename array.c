#include <stdio.h>

int get_fibonacci_series(unsigned int *fibonacci, int maximum)
{
  unsigned int previous_term = 0, current_term = 1;
  for (int i = 0; i < maximum; i++)
  {
    fibonacci[i] = previous_term;
    previous_term = current_term;
    current_term = fibonacci[i] + current_term;
  }
  return 0;
}

int print_int_array(unsigned int *array, int maximum)
{
  for (int i = 0; i < maximum; i++)
  {
    printf("%u ", array[i]);
  }
  return 0;
}

int main(void)
{
  int maximum;
  printf("Enter the maximum values you want for the fibonacci series\n");
  scanf("%d", &maximum);
  unsigned int fibonacci[maximum];
  get_fibonacci_series(fibonacci, maximum);
  print_int_array(fibonacci, maximum);
  return 0;
}
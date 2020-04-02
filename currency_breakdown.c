#include <stdio.h>

int print_notes(int amount)
{
  int notes[] = {2000, 500, 200, 100, 50, 10, 5, 1};
  int count, i;
  for (i = 0; i < 8; i++)
  {
    count = amount / notes[i];
    count &&printf("%d x Rs %d\n", count, notes[i]);
    amount = amount % notes[i];
  }
  return 0;
}

int main(void)
{
  int amount;
  printf("enter the amount\n");
  scanf("%d", &amount);
  print_notes(amount);
  return 0;
}
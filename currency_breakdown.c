#include <stdio.h>

int get_notes_count(unsigned int amount, unsigned int *currency, unsigned int *notes, int length);
int print_notes(unsigned int *currency, unsigned int *notes, int length);

int get_notes_count(unsigned int amount, unsigned int *currency, unsigned int *notes, int length)
{
  unsigned int balance = amount;
  for (int i = 0; i < length; i++)
  {
    notes[i] = balance / currency[i];
    balance = balance % currency[i];
  }
  return 0;
}

int print_notes(unsigned int *currency, unsigned int *notes, int length)
{
  for (int i = 0; i < length; i++)
  {
    notes[i] && printf("%u x Rs %u\n", notes[i], currency[i]);
  }
  return 0;
}

int main(void)
{
  //unsigned int currency[] = {2000, 500, 200, 100, 50, 10, 5, 1}, notes[8], amount;
  unsigned int currency[] = {2000, 500, 200, 100, 50, 10, 5, 1};
  unsigned int notes[8];
  unsigned int amount;
  // int length = sizeof(currency) / sizeof(currency[0]); // used to find the length of the array
  int length = 8;

  printf("enter the amount\n");
  scanf("%u", &amount);
  get_notes_count(amount, currency, notes, length);
  print_notes(currency, notes, length);
  return 0;
}
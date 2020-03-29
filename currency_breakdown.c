#include <stdio.h>

int find_notes(int amount);
int get_balance(int amount, int currency);

int get_balance(int amount, int currency)
{
  int count = amount / currency;
  if (count)
  {
    printf("%d x Rs %d\n", count, currency);
  }
  // count && printf("%d x Rs %d\n", count, currency);
  return amount % currency;
}

int find_notes(int amount)
{
  int balance;
  balance = get_balance(amount, 2000);
  balance = get_balance(balance, 500);
  balance = get_balance(balance, 200);
  balance = get_balance(balance, 100);
  balance = get_balance(balance, 50);
  balance = get_balance(balance, 10);
  balance = get_balance(balance, 5);
  balance = get_balance(balance, 1);
  return balance;
}

int main(void)
{
  int amount;
  printf("Enter amount\n");
  scanf("%d", &amount);
  find_notes(amount);
  return 0;
}
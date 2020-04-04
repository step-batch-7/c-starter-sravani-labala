#include <stdio.h>

void rotate(char *msg, int length)
{
  int i, n, codeNumber = 13, min = 96, max = 122;
  for (i = 0; i < length; i++)
  {
    n = msg[i] < min ? msg[i] : msg[i] + codeNumber;
    printf("%c", n < max ? n : min + (n - max));
  }
}

int main(void)
{
  char secretMsg[] = {116,
                      98,
                      32,
                      112,
                      98,
                      101,
                      98,
                      97,
                      110};
  rotate(secretMsg, 9);
  return 0;
}

// the following is the question
// Dr. Bedi is developing a vaccinee for corona virus.
// Here is the genome sequence of the virus [116, 98, 32, 112,98, 101, 98,  97, 110].
// The sequence is two level encrypted and it has a secret message.
// Can you help Dr.Bedi to decrypt the message.
// the answer is go corona
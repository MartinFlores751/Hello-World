// Includes the standard input output header
#include <stdio.h>

// Could just be int main() really...
int main(void)
{
  // Print formated, the cout of C
  printf("Programming is fun in C!\n\n");
  printf("Testing...\n..1\n...2\n....3\n");

  // Some stuff with numbers now
  int a,b,c;
  a = 25;
  b = 4;
  c = a + b;

  // Modifys the value but doesn't change the true value
  printf("The sum of %i and %i is %i\n", a - 5, b + 5, c);

  // Just to prove the above statement
  printf("Acutally, the real numbers used are %i and %i\n", a, b);

  // Still return 0, duh
  return 0;
}

#include <stdio.h>

int main(void)
{
  _Bool printTriangle(int *loop, int *nums);
  int loops, numbs;

  _Bool thing = printTriangle(&loops, &numbs);

  if(thing == 1)
    printf("\n\n'Tis an even number that ends it all, the %i.\n\n", numbs);
  else
    printf("\n\n'Tis an odd number, that %i\n\n", numbs);

  return 0;
}

_Bool printTriangle(int *loop, int *nums)
{
  printf("What number do you wish to count up to?: ");
  scanf("%i", loop);

  printf("TABLE OF TRIANGULAR NUMBERS\n\n");
  printf(" n    Sum from 1 to n\n");
  printf("---   ---------------\n");

  *nums = 0;

  for(int n = 1; n <= *loop; ++n)
  {
    *nums += n;
    printf(" %2i           %i\n", n, (*nums));
  }

  if(*nums % 2 == 0)
    return 1;
  else
    return 0;
}

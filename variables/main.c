#include <stdio.h>
#include <stdbool.h>

int main(void)
{
  /*
   * Pratice some stuff with variables in C!!!
   */

  // Ints
  int RGB = 0xffe324;
  /* Methods of printing hex:
   * %x : prints hex wo\leading 0x
   * %#x : prints hex w\leading 0x
   * %X : prints hex wo\leading 0x in caps
   * %#X : prints hex w\ leading 0x in caps
   */
  printf("Some random RGB color is %#x\n", RGB);

  // Floats
  float cool = 2.12;
  float cooler = 7000000.f;
  float coolSceince = 2.01e-10;
  double ye = 123.45678910;

  // Straight up prints a float
  printf("You are bout a %f on the cool rating.\n", cool);

  // If the value of exponent is -4 < # < 5, the value is displayed in
  // scientific notation
  printf("I'm about an %g on the cool rating compared to your %g.\n", cooler, cool);

  // Prints in sciency format, +5 to smarts for 1 min after printed to screen
  printf("It's a lot better then that individual over there, [person] has %e.\n", coolSceince);

  // Printing double uses the same things that float uses
  printf("I don't know what to do so... %f\n", ye);

  // Character and bool stuff
  char n = '\n';

  // Classic bool format
  // Uses 0 and 1 for false and true
  _Bool thing  = 0;

  // Or if you include <stdbool.h>
  bool thing2 = false;

  // As a quick note, the bool var can be represented using %i on the
  // stdio stream

  // Print Character
  printf("Testing...%c..1%c...2%c....3%c", n, n, n, n);

  // Long, long Long, and long double
  long int num = 256712L; // At least 32 bits
  long long int num2 = 12345678910;// At least 64 bits
  long double num3 = 1.23E7L;

  // For the long float, use the float output with an L before the %
  printf("The long int is %li, the long long int is %lli, and the long double is %Le\n", num, num2, num3);

  /* Tips and tricks:
   * - You can ommit the int if your doing long, short, long long, unsigned etc...
   * - regular arithmetic operations apply
   * - Casting is useful
   */

  return 0;
}

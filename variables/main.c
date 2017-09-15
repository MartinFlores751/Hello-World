#include <stdio.h>

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

  return 0;
}

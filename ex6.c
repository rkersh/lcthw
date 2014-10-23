#include <stdio.h>

int main(int argc, char *argv[])
{
  int distance = 100;
  float power = 2.345f;
  double super_power = 56789.4532;
  char initial = 'A';
  char first_name[] = "Zed";
  char last_name[] = "Shaw";

  printf("You are %d miles away.\n", distance);
  printf("You have %f levels of power.\n", power);
  printf("You have %f awesome super powers.\n", super_power);
  printf("I have an initial %c.\n", initial);
  printf("I have a first name %s.\n", first_name);
  printf("I have a last name %s.\n", last_name);
  printf("My whole name is %s %c. %s.\n",
	 first_name, initial, last_name);
  /* Causes a segmentation fault! */
  /* printf("%s", 'c'); */

  printf("Decimal floating point, lowercase: %f\n", super_power);
  printf("Decimal floating point, uppercase: %F\n", super_power);
  printf("Scientific notation, lowercase: %e\n", super_power);
  printf("Scientific notation, uppercase: %E\n", super_power);
  printf("Shortest representation, lowercase: %g\n", super_power);
  printf("Shortest representation, uppercase: %G\n", super_power);
  printf("Hexadecimal floating point, lowercase: %a\n", super_power);
  printf("Hexadecimal floating point, uppercase: %A\n", super_power);
  printf("%+f\n", super_power);
  printf("%+f\n", -super_power);
  printf("%.9f\n", super_power);
  printf("%.40f\n", 1.0f/3.0f);
  printf("%s\n", ""); /* prints a newline. */
  /* Causes: zero-length gnu_printf format string warning. */
  /* printf(""); */

  return 0;
}

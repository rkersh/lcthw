#include <stdio.h>

#define UPPER_A 65
#define UPPER_Z 90
#define UPPER_LOWER_DIFF 32

int main (int argc, char *argv[])
{
  if (argc != 2) {
    printf("ERROR: You need one argument.\n");
    // this is how you abort a program
    return 1;
  }

  int i = 0;
  for (i = 0; argv[1][i] != '\0'; i++) {
    char letter = argv[1][i];
    int ord = (int)letter;

    // convert to lowercase if it's an uppercase letter
    if (ord >= UPPER_A && ord <= UPPER_Z)
      letter = (char)(ord + UPPER_LOWER_DIFF);

    switch (letter) {
    case 'a':
      printf("%d: 'A'\n", i);
      break;
    case 'e':
      printf("%d: 'E'\n", i);
      break;
    case 'i':
      printf("%d: 'I'\n", i);
      break;
    case 'o':
      printf("%d: 'O'\n", i);
      break;
    case 'u':
      printf("%d: 'U'\n", i);
      break;
    case 'y':
      if (i > 2) {
        // it's only sometimes Y
        printf("%d: 'Y'\n", i);
      } else {
        printf("%d: 'Y' is only sometimes a vowel\n", i);
      }
      break;
    default:
      printf("%d: %c is not a vowel\n", i, letter);
    }
  }

  return 0;
}

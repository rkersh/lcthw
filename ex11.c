#include <stdio.h>

int main(int argc, char *argv[])
{
  // go through each string in argv

  int i = 0;
  while (i < argc) {
    printf("arg %d: %s\n", i, argv[i]);
    i++;
  }

  // loop in reverse
  printf("\nloop in reverse\n");
  i = argc > 0 ? argc - 1 : 0;
  while (i >= 0) {
    printf("arg %d: %s\n", i, argv[i]);
    i--;
  }
  printf("\n");

  // let's make our own array of strings
  char *states[] = {
    "California", "Oregon",
    "Washington", "Texas"
  };

  int num_states = 4;
  i = 0;
  while (i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    i++;
  }

  // loop in reverse
  printf("\nloop in reverse\n");
  i = num_states > 0 ? num_states - 1: 0;
  while (i >= 0) {
    printf("state %d: %s\n", i, states[i]);
    i--;
  }
  printf("\n");

  // "copy" values from argv into states
  i = argc > 0 ? argc - 1 : 0;
  while (i >= 0) {
    if (i < num_states)
      /* This doesn't really "copy" the characters.
       * Rather, it points at the character array in argv[i]. */
      states[i] = argv[i];
    i--;
  }

  i = 0;
  while (i < num_states) {
    printf("state %d: %s\n", i, states[i]);
    if (i < argc) {
      printf("states[%d] = %ld\n", i, (long)states[i]);
      printf("argv[%d] = %ld\n", i, (long)argv[i]);
      printf("states[%d] points at argv[%d]\n", i, i);
      /* See if we change one, then both are changed. */
      argv[i][0] = 'A';
      printf("states[%d] = %s\n", i, states[i]);
      printf("argv[%d] = %s\n", i, argv[i]);
    }
    i++;
  }

  return 0;
}

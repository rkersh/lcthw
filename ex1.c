#include <stdio.h>
#include <assert.h>

static void
my_puts(char *s)
{
  int status;
  status = puts(s);
  assert( status > 0 );
}

int main(int argc, char *argv[])
{
  my_puts("Hello world.");
  my_puts("1");
  my_puts(" 2");
  my_puts("  3");
  my_puts("   4");
  my_puts("    5");
  return 0;
}

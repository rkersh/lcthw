#include <stdio.h>

// A pointer is an address pointing to another location in memory, with a
// type specifier so you get the right size of data with it.

int main (int argc, char *argv[])
{
   // create two arrays we care about
   int ages[] = {23, 43, 12, 89, 2};
   char *names[] = {
      "Alan", "Frank",
      "Mary", "John", "Lisa"
   };

   // safely get the size of ages
   int count = sizeof(ages) / sizeof(int);
   int i = 0;

   // first way of using idexing
   for (i = 0; i < count; i++) {
      printf("%s has %d years alive.\n",
	     names[i], ages[i]);
   }
   // print in reversed order
   /* for (i = count - 1; i >= 0; i--) */
   /*    printf("%s has %d years alive.\n", names[i], ages[i]); */

   printf("---\n");

   // setup the pointers to the start of the arrays
   int *cur_age = ages;
   char **cur_name = names;
   // point to the end of the arrays instead
   // NOTE: To print in reversed order below uncomment this (and stuff
   //       below).  You'll also need to comment out the regular order
   //       stuff, of course.
   /* int *cur_age = ages + count - 1; */
   /* char **cur_name = names + count - 1; */

   // second way using pointers
   for (i = 0; i < count; i++) {
      printf("%s is %d years old.\n",
	     *(cur_name + i), *(cur_age + i));
      // print in reversed order
      /* printf("%s is %d years old.\n", */
      /*        *(cur_name - i), *(cur_age - i)); */
   }

   printf("---\n");

   // third way, pointers are just arrays
   for (i = 0; i < count; i++) {
      printf("%s is %d years old again.\n",
	     cur_name[i], cur_age[i]);
      // print in reversed order
      /* printf("%s is %d years old again.\n", */
      /* 	     cur_name[-i], cur_age[-i]); */
   }

   printf("---\n");

   // fourth way with pointers in a stupid complex way
   for (cur_name = names, cur_age = ages;
	(cur_age - ages) < count;
	cur_name++, cur_age++) {
      printf("%s lived %d years so far.\n",
	     *cur_name, *cur_age);
   }
   // print in reversed order
   /* for (cur_name = names + count - 1, */
   /* 	   cur_age = ages + count - 1; */
   /* 	(cur_age - ages) >= 0; */
   /* 	cur_name--, cur_age--) { */
   /*    printf("%s lived %d years so far.\n", */
   /* 	     *cur_name, *cur_age); */
   /* } */

   return 0;
}

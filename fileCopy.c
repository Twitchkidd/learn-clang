#include <stdio.h>

/* copy input to output; 1st version */
// int main()
// {
//   int c;

//   c = getchar();
//   while (c != EOF)
//   {
//     putchar(c);
//     c = getchar();
//   }
// }

/* copy input to output; 2nd version */

int main()
{
  int c;

  while ((c = getchar()) != EOF)
  {
    putchar(c);
  }
  return 0;
}

/* exercise: Write a program to print the value of EOF */

// int main()
// {
//   int f;
//   f = EOF;
//   printf("%d", f);
//   return 0;
// }
// >> -1 !!!

/* exercise: Verify that the expression getchar() != EOF is either 0 or 1 */

// int main()
// {
//   int c;

//   printf("%d", c = getchar() != EOF);
// >> 1%
// printf("%d", c = getchar() == EOF);
// >> 0%
// }
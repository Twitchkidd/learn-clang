#include <stdio.h>

int main()
{
  int fahr, celcius;
  int lower, upper, step;
  lower = 0;
  upper = 400;
  step = 5;
  fahr = lower;
  while (fahr <= upper)
  {
    celcius = 5 * (fahr - 32) / 9;
    printf("%3d%6d\n", fahr, celcius);
    fahr = fahr + step;
  }
}
#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

int main()
{
  float fahr;
  for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
  {
    printf("%3.0f %6.2f\n", fahr, (5.0 / 9.0) * (fahr - 32));
  }
}
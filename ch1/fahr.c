#include <stdio.h>

/* Prints Fahrenheit to Celsius tables
    for fahr/cels in (0,20,...,300) */

#define LOWER 0
#define STEP  20
#define UPPER 300

main()
{
  float fahr, cels;

  printf("Fahrenheit to Celsius\n");
  fahr = LOWER;
  while (fahr <= UPPER) {
    cels = (5.0 / 9.0) * (fahr - 32.0);
    printf("%6.0f %6.1f\n", fahr, cels);
    fahr = fahr + STEP;
  }

  printf("Celsius to Fahrenheit\n");
  for (cels = UPPER; cels >= LOWER; cels = cels - STEP) {
    fahr = ((9.0 / 5.0) * cels) + 32.0;
    printf("%6.0f %6.1f\n", cels, fahr);
  }
}

#include <stdio.h>

/* Prints Fahrenheit to Celsius tables
    for fahr/cels in (0,20,...,300) */

main()
{
  float fahr, cels;
  int lower, upper, step;

  lower = 0;
  upper = 300;
  step = 20;

  printf("Fahrenheit to Celsius\n");
  fahr = lower;
  while (fahr <= upper) {
    cels = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f %6.1f\n", fahr, cels);
    fahr = fahr + step;
  }

  printf("Celsius to Fahrenheit\n");
  for (cels = upper; cels >= lower; cels = cels - step) {
    fahr = ((9.0 / 5.0) * cels) + 32.0;
    printf("%3.0f %6.1f\n", cels, fahr);
  }
}

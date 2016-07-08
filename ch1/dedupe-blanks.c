#include <stdio.h>

// Copy input to output deduplicating blanks

main()
{
  int c, last_blank;

  last_blank = 0;

  while ((c = getchar()) != EOF) {
    if (c != ' ' || ! last_blank) {
      putchar(c);
    }

    if (c == ' ') {
      last_blank = 1;
    } else {
      last_blank = 0;
    }
  }
}


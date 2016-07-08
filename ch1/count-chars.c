#include <stdio.h>

// Count characters in input

main()
{
  long char_count, line_count;
  int c;

  char_count = 0;
  line_count = 0;

  while ((c = getchar()) != EOF) {
    ++char_count;

    if (c == '\n')
      ++line_count;
  }

  printf("%ld chars over %ld lines\n", char_count, line_count);
}


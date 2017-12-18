#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// https://www.codewars.com/kata/mumbling
// 7 kyu
char *accum(const char * source) {
  int len = strlen(source);

  int size = len * (1 + len) / 2 + len;
  char *dest = malloc(size * sizeof(char));
  if (dest == NULL) return NULL;

  const char * p = source;
  char * d = dest;
  int i = 1;
  while (*p != '\0') {
      *d++ = *p & '_'; // upper case
      char lower = *p | ' ';
      for (int k = 2; k <= i; k++) *d++ = lower;
      *d++ = '-';
      i++;
      p++;
  }

  *--d = '\0';

  return dest;
}

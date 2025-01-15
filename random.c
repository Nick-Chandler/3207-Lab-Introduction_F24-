#include <stdio.h>
#include <stdlib.h>
#include <time.h>

char randchar() {
  char c = 'a';
  c += (rand() % 26);
  return c;
}


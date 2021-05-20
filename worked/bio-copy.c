#include <stdio.h>

// https://en.wikipedia.org/wiki/Rule_30

int k[81] = {[40] = 1};

int main(void) {
  while(k[0] == 0) {
    for (int i = 0, prev = 0; i < 80; i++) {
      if (k[i] == 0) {
        putchar(' ');
      } else if (k[i] == 1) {
        putchar('*');
      }
      
      int tmp = prev ^ (k[i] | k[i + 1]);
      prev = k[i];
      k[i] = tmp;
    }

    putchar('\n');
  }
}
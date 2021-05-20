#include <stdio.h>
#include <unistd.h>

// https://en.wikipedia.org/wiki/Munching_square

int x;
int t;

int main(void) {
  while (1) {
    for (int x = 0; x < 16; x++) {
      printf("\e[%d;%dH\e[3%dm*", (x ^ t) + 1, x + 1, (t % 6) + 1);
    }
    
    fflush(0);
    usleep(1 << 18);
    t = (t + 1) % 16;
  }
}
#include <time.h>

typedef unsigned int ui;

int wtime = 1621393200; // Wednesday, May 19th, 2021, 1 PM (australia time)
                        // Time the workshop starts
int b = 1619488800;     // Tuesday, April 27th, 2021, 12 PM (australia time)

int x = 86400;          // 24 hours / day
int y = 3600;           // 60 * 60 seconds / hour
int z = 60;             // 60 seconds / minute, minutes / hour

int difference, days, hours, minutes, seconds;

int main(void) {
  difference = wtime - time(NULL);
  
  days = difference / x;
  hours = difference % x / y;
  minutes = difference % y / z;
  seconds = difference % z;
  
  difference = (difference * 40) / (wtime - b);
  
  for (int j = 0; j < 6; j++) {
    if (j % 5 == 0) {
      printf("+");
    } else {
      printf("|");
    }
  
    for (int i = 0; i < 40; i++) {
      if (j % 5 == 0) {
        printf("-");
      } else if (i >= 40 - difference) {
        printf(" ");
      } else {
        printf("\e[9%dm%c\e[0m",
               (((ui)&wtime >> 4) ^ (j * 43 + i)) % 6 + 1,
               "@8Oo0*"[(((ui)&wtime >> 4) ^ (j * 43 + i)) % 6]);
      }
    }
    
    if (j % 5 == 0) {
      printf("+\n");
    } else {
      printf("|\n");
    }
  }
             
  printf("%d days, %02d:%02d:%02d until the workshop!\n", days, hours, minutes, seconds);
}
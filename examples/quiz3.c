#include <stdio.h>

int main(void)
{
  int a = 0, b = 0, c = 0;  
  printf("%d\n", (a=1)?(a--?(--a+(++b)+c++):(c+++a)):(--a-(--b)-(--c)));
}
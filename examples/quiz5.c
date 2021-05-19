for (int i = 0, j = 0, k = 0; i < 200; j = (++i) / 10 % 10, k = i % 10) {
  if (k == j) {
    printf("\\");
  } else if (k == 9 - j) {
    printf("/");
  } else if ((k >= j && k <= 9 - j) || (k <= j && k >= 9 - j)) {
    printf("~");
  } else {
    printf(" ");
  }

  if (k == 9)
    printf("\n");
}
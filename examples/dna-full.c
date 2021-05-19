for (int i = 0, j = 0, k = 0; i < 200; j = (++i) / 10 % 10, k = i % 10) {
  printf("%c", " \\/~"[
    (k == j)
    + 2 * (k == 9 - j)
    + 3 * ((k > j && k < 9 - j) || (k < j && k > 9 - j))
  ]);

  if (k == 9)
    printf("\n");
}
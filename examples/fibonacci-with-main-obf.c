a, b, i, j, n, tmp;

fib(n) {
  a = 0;
  b = 1;

  for (i = 0; i < n - 1; i++) {
    tmp = a + b;
    a = b;
    b = tmp;
  }

  return b;
}

main(void) {
  for (j = 1; j < 20; j++) {
    printf("F_%d = %d\n", j, fib(j));
  }
}
int fib(int n) {
  int a = 0;
  int b = 1;

  for (int i = 0; i < n - 1; i++) {
    int tmp = a + b;
    a = b;
    b = tmp;
  }

  return b;
}

int main(void) {
  for (int i = 1; i < 20; i++) {
    printf("F_%d = %d\n", i, fib(i));
  }
}
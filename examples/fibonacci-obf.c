int fib(int n) {
  int b = 1;
  
  for (int a = b - 1, i = a;
    i++ < n - 1;
    b = a + b, a = b - a);
  
  return b;
}
int factors(int n)
{
  int c = 0;

  for (int i = 1; i <= n; i++) {
    c += !(n % i);
  }

  return c;
}
int factors(int n)
{
  int c = 0;

  for (int i = 1; i <= n; i++) {
    // What's happening here?
    c += (n % i) ? 0 : 1;
  }

  return c;
}
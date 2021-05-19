// Is it still obvious what this is doing?

int e(int * n, int s)
{
  int c = 0;

  for (int i = 0; i < s; i++) {
    if (n[i] % 42 == 0) {
      n[i] = 0;
      c++;
    }
  }

  return c;
}
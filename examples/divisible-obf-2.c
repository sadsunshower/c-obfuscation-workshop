// Those look like functions,
// but are they really?

#define D(a,b,c) a[b] % c == 0
#define F(v,l) int v = 0; v < l; v++

int e(int * n, int s)
{
  int c = 0;

  for (F(i, s)) {
    if (D(n, i, 42)) {
      n[i] = 0;
      c++;
    }
  }

  return c;
}
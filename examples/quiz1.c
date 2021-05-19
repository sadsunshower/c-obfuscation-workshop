int e(int a, int b)
{
  while (b) {
    int q = b;
    b = a % b;
    a = q;
  }
  
  return a;
}
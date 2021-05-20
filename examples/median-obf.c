double median(double * x, int n)
{
  return (x[n / 2]
         + (!(n % 2) * x[n / 2 - 1]))
         / (!(n % 2) + 1);
}
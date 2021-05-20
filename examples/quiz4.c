int main(void)
{
  int n = 5;

  do {
    printf("%d\n", n);
  } while ((n = (1 - (n % 2)) * (n / 2) + (n % 2) * (3 * n + 1)) - 1);

  printf("%d\n", n);
}
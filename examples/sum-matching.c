int sum_matching(int * a1, int * a2, int n)
{
  int sum = 0;

  for (int i = 0; i < n; i++) {
    sum += a1[i] + a2[i];
  }

  return sum;
}

int main(int argc, char ** argv)
{
  int n = atoi(argv[1]);
  int * a1 = malloc(sizeof(int) * n);
  int * a2 = malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++)
    a1[i] = atoi(argv[i + 2]);
  for (int i = 0; i < n; i++)
    a2[i] = atoi(argv[i + 2 + n]);

  printf("%d\n", sum_matching(a1, a2, n));
  return 0;
}

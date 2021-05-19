#define ERR(s) fprintf(stderr, s); exit(1);

FILE * open_check(const char * name)
{
  FILE * f = fopen(name, "r");

  if (f == NULL)
    ERR("Failed to open file\n");

  return f;
}

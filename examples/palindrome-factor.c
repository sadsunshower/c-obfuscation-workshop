// Easy(ish) to follow

int palindrome_factor(char * str)
{
  int len = strlen(str);
  char * tmp = malloc(len + 1);

  for (int i = len, j = 0;
       i >= 0;
       i--, j++) {
    tmp[i] = str[j];
  }

  int count = 0;

  for (int i = 0; i < len; i++) {
    if (tmp[i] == str[i])
      count++;
  }

  return count;
}

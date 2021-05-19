// Hard to follow

int palindrome_factor(char * str)
{
  int len; char * tmp; int count;
  int i; int j;
  goto d;

a:
  i = 0; count = 0; goto e;
b:
  tmp[i--] = str[j++];
  if (i >= 0) goto b; goto a;
c:
  i = len - 1, j = 0; goto b;
d:
  len = strlen(str); tmp = malloc(len + 1);
  goto c;
e:
  if (tmp[i] == str[i]) count++; i++;
  if (i < len) goto e; return count;
}

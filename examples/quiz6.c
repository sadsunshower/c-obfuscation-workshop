char* p = "\2\3\5\7\v\r\x11\x13\x17\x1d\x1f%)+/5;=CGIOSYa";

int main(void)
{
  int n = 57;
  
  while (1) {
    int f = 0;
    for (int i = 24; i >= 0 && !f; i--) {
      if (n % p[i] == 0) {
        printf("%d ", p[i]);
        n /= p[i]; f = 1;
      }
    }
    if (!f) break;
  }
  
  printf("\n");
}
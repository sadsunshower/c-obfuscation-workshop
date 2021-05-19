int data[2003];

void sum_matching(void)
{
  for (*data = 0; *data < data[1];
       (*data)++) {
    data[2] += data[3 + *data]
               + data[1003 + *data];
  }
}

int main(int argc, char ** argv)
{
  data[1] = atoi(argv[1]);

  for (; *data < data[1]; (*data)++)
    data[3 + *data]
    = atoi(argv[*data + 2]);
  for (*data = 0; *data < data[1];
       (*data)++)
    data[1003 + *data]
    = atoi(argv[*data + 2 + data[1]]);

  sum_matching();
  printf("%d\n", data[2]);
  return 0;
}

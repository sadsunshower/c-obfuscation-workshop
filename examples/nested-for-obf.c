for (int i = 0, j = 0;
     i < n;
     j = (j + 1) % m, i += (j == 0)) {
  action(i, j);
}

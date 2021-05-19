// This does use an if statement,
// but it's still harder to read

for (int i = 0, j = 0, k = 0;
     k <= 2;
     i += (k == 0), j += (k == 1),
     k += (i == n || j == m)) {
  if (k == 0)
    action(i);
  else
    action(j);
}

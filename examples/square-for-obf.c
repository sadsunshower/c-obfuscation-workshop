// Take note that the *outer* loop uses /
// and the *inner* loop uses %

for (int i = 0; i < n * n; i++) {
  action(i / n, i % n);
}

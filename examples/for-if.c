for (int i = condition(); i; i = 0) {
  action();
}

// Alternatively:

for (;condition();) {
  action();
  break;
}

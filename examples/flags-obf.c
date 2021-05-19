int field = 0;

field |= 1 << 1;

if ((field & 3) && (field & 4)) {
  do_something();
}
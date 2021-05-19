// A function using if statements

char toggle_case(char c)
{
  if (c >= 'a' && c <= 'z') {
    return c + ('A' - 'a');
  } else {
    return c + ('a' - 'A');
  }
}
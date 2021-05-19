// A function using the ternary operator

char toggle_case(char c)
{
  return (c >= 'a' && c <= 'z')
         ? c + ('A' - 'a')
         : c + ('a' - 'A');
}
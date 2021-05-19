void fizzbuzz(int n)
{
  // Ace your interviews with this one
  // weird trick!
  printf((n % 3 && n % 5)
         ? "%d%s\n"
         : "%s%s\n",
         (n % 3 && n % 5)
         ? n
         : ((n % 3) ? "" : "Fizz"),
         (n % 5)
         ? ""
         : "Buzz");
}
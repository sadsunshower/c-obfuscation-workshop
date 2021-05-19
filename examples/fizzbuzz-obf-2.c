char * fmt[4] = { "%d\n",
		  "Fizz\n",
		  "Buzz\n",
		  "FizzBuzz\n" };

void fizzbuzz(int n)
{
	printf(fmt[(n % 3 == 0)
		   + 2 * (n % 5 == 0)], n);
	return 0;
}

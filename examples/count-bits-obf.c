int count_bits(unsigned int n)
{
	int count = 0;

	// A famous trick
	// Think about why it works
	while (n > 0) {
		n &= n - 1;
		count++;
	}

	return count;
}

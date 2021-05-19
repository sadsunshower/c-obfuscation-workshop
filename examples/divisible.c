// Simple to read

#define FACTOR 42
int eliminate_divisible(int * numbers,
                        int size)
{
  int count = 0;

  for (int i = 0; i < size; i++) {
    if (numbers[i] % FACTOR == 0) {
      numbers[i] = 0;

      // Record how many numbers we
      // eliminate
      count++;
    }
  }

  return count;
}
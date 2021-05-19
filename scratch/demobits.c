void print_array(int * numbers, int size)
{
    printf("[ ");
    
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    
    printf("]\n");
}
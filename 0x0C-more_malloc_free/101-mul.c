#include <stdio.h>
#include <stdlib.h>

int find_len(const char *str);
char *create_xarray(int size);
char *iterate_zeroes(char *str);
void get_prod(char *prod, const char *mult, int digit, int zeroes);
void add_nums(char *final_prod, const char *next_prod, int next_len);

int find_len(const char *str)
{
    int len = 0;
    while (*str++)
        len++;
    return len;
}

char *create_xarray(int size)
{
    char *array;
    int index;

    array = malloc(sizeof(char) * size);

    if (array == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1); // Return a non-zero value to indicate an error
    }

    for (index = 0; index < (size - 1); index++)
        array[index] = 'x';

    array[index] = '\0';

    return array;
}

// Other functions remain the same...

int main(int argc, char *argv[])
{
    // ...

    if (*(argv[1]) == '0')
        argv[1] = iterate_zeroes(argv[1]);
    if (*(argv[2]) == '0')
        argv[2] = iterate_zeroes(argv[2]);
    if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
    {
        printf("0\n");
        return 0;
    }

    size = find_len(argv[1]) + find_len(argv[2]);
    final_prod = create_xarray(size + 1);
    next_prod = create_xarray(size + 1);

    // ...

    // Free allocated memory before exiting
    free(next_prod);
    free(final_prod);

    return 0;
}


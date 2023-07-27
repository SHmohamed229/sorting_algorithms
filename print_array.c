#include <stdlib.h>
#include <stdio.h>

/**
 * print_array - this Method for Print an array of int
 *
 * @array: for The array to be printed
 * @size: for Number of element in @array
 */
void print_array(const int *array, size_t size)
{
    size_t i;

    i = 0;
    while (array && i < size)
    {
        if (i > 0)
            printf(", ");
        printf("%d", array[i]);
        ++i;
    }
    printf("\n");
}

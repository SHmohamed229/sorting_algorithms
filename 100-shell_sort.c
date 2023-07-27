#include "sort.h"
#include <stdio.h>
/**
 * _swap - this method swaped 2 values.
 * @array: for the array for swap him values.
 * @i: for First index
 * @j: for Second index
 * Return: Nothing
 */
void _swap(int *array, int i, int j)
{
	int tmp;

	if (array[i] != array[j])
	{
		tmp = array[i];
		array[i] = array[j];
		array[j] = tmp;
	}
}

/**
 * shell_sort - this Method for sort the list and print the change
 * @array: for The array to sort.
 * @size: for Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 0,  i, j;

	if (size < 2)
		return;

	while (h <= size / 3)
		h = h * 3 + 1;

	while (h >= 1)
	{
		for (i = h; i < size; i++)
			for (j = i; j >= h && array[j] < array[j - h]; j -= h)
				_swap(array, j, j - h);
		h /= 3;
		print_array(array, size);
	}
}

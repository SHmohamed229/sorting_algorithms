#include "sort.h"

/**
 * swap_ints - this Method for swap two int in an array.
 * @a: for The first int to swap.
 * @b: for The second int to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * selection_sort - this Method sort an arr of int in ascending order
 *                  use the selection Sort algorithm.
 * @array: For An array of int.
 * @size: For The size of the array.
 *
 * Description: this for Print the array after each swap.
 */
void selection_sort(int *array, size_t size)
{
	int *min;
	size_t i, j;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array + i;
		for (j = i + 1; j < size; j++)
			min = (array[j] < *min) ? (array + j) : min;

		if ((array + i) != min)
		{
			swap_ints(array + i, min);
			print_array(array, size);
		}
	}
}

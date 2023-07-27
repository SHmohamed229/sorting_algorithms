#include "sort.h"

int lomuto_partition(int *array, size_t size, int left, int right);
void swap_ints(int *a, int *b);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

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
 * lomuto_partition - For order a subset of array of int according to
 *                    the lomuto  scheme [last element as pivot].
 * @array: for The array of int.
 * @size: for The size of the array.
 * @left: for The start index of the subset to order.
 * @right: for The end index of the subset to order.
 *
 * Return: the final partition index.
 */
int lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * lomuto_sort - this for implement the quicksort algorithm through recursion.
 * @array: for An array of int to sort.
 * @size: for  The size of the array.
 * @left: for The start index of the array partition to order.
 * @right: for The end index of the array partition to order.
 *
 * Description: this uses the Lomuto partition scheme.
 */
void lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;

	if (right - left > 0)
	{
		part = lomuto_partition(array, size, left, right);
		lomuto_sort(array, size, left, part - 1);
		lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * quick_sort - this Method sort an array of int in ascending
 *              order use the Quicksort algorithm.
 * @array: for An array of int.
 * @size: for The size of the array.
 *
 * Description: for uses the  partition scheme. print
 *              the array after each swap of two elements.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}

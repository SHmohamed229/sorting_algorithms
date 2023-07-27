#include "sort.h"

/**
 * swap_ints - this Method for swap two  given int
 * @a: for First int.
 * @b: for Second int.
 */

void swap_ints(int *a,int *b)
{
	int tmp;
	tmp = *a; 
	*a = *b;
	*b = tmp;
}

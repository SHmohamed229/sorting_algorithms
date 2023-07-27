#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>


/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/*this prototype helper for swapping*/
void swap_ints(int *a, int *b);

/*this for print helper functions */
void print_list(const listint_t *list);
void print_array(const int *array, size_t size);

/*this for regular prototypes*/
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void bubble_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
#endif

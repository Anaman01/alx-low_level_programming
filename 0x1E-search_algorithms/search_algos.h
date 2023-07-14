#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - Defines a singly linked list
 *
 * @n: Integer value
 * @index: Position of the node in the list
 * @next: Reference to the succeeding node
 *
 * Description: This is a structure for a singly linked list node
 * used in the Holberton project
 */
typedef struct listint_s
{
		int n;
		size_t index;
		struct listint_s *next;
} listint_t;

/**
 * struct skiplist_s - Defines a singly linked list with a fast track
 *
 * @n: Integer value
 * @index: Position of the node in the list
 * @next: Reference to the succeeding node
 * @express: Reference to the succeeding node in the fast track
 *
 * Description: This is a structure for a singly linked list node with a fast track
 * used in the Holberton project
 */
typedef struct skiplist_s
{
				int n;
				size_t index;
				struct skiplist_s *next;
				struct skiplist_s *express;
} skiplist_t;

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

#endif /* SEARCH_ALGOS_H */

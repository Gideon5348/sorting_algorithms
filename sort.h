#ifndef SORT_H
#define SORT_H

#include <stddef.h>

/* Function prototype for bubble_sort */
void bubble_sort(int *array, size_t size);

/* Other function prototypes, if any, for additional sorting algorithms */

/* Struct definition for doubly linked list */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* Function prototypes for print_array and print_list */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

#endif /* SORT_H */

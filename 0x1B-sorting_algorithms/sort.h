#ifndef HEADER_FILE
#define HEADER_FILE
#include <stdio.h>
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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list);
void swap_nodes(listint_t *a, listint_t *b);
void bubble_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void swap(int *arr, int i, int j);
int lomutos_partition(int *arr, size_t lo, size_t hi, size_t size);
void recursion(int *arr, size_t low, size_t high, size_t size);
#endif

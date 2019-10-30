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
void switch_n(listint_t **cm, listint_t **un);

void bubble_sort(int *array, size_t size);
void switch_a(int *p_a, int *p_b);

void selection_sort(int *array, size_t size);

void quick_sort(int *array, size_t size);
void swap_int(int *a, int *b);
int lomutos_partition(int *arr, int lo, int hi, size_t size);
void recursion(int *arr, int low, int high, size_t size);
#endif

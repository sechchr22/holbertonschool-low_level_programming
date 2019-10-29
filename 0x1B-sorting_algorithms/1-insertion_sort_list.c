#include "sort.h"
/**
 * swap_nodes - function to swap nodes
 * @a: pointer to a node
 * @b: pointer to a node
 * Return: nothing
*/

void swap_nodes(listint_t *a, listint_t *b)
{
	listint_t *temp;

	temp = a; if (a->prev == NULL && b->next == NULL)
	{
		a->next = NULL;
		b->next = temp;
		b->prev = NULL;
		a->prev = b->next;
		return;
	}
	if (a->prev == NULL)
	{
		a->prev = a->next;
		a->next = b->next;
		b->next->prev = temp;
		b->next = temp;
		a = a->prev;
		b->prev = NULL;
		return;
	}
	if (b->next == NULL)
	{
		a->prev->next = a->next;
		b->prev = a->prev;
		b->next = temp;
		a->prev = a->next;
		a->next = NULL;
		return;
	}
	else
	{
		a->prev->next = a->next;
		b->prev = a->prev;
		a->prev = a->next;
		a->next = b->next;
		b->next->prev = temp;
		b->next = temp;
		return;
	}
}

/**
 * insertion_sort_list - to sort with insertion algorithm
 * @list: double pointer to a double linked list
 * Return: nothing
*/

void insertion_sort_list(listint_t **list)
{
	int count = 0;
	listint_t *head, *marker = *list;
	listint_t *end_sorted_list, *runner = *list;
	listint_t *begin_unsorted_list;

	while (runner != NULL)
	{
		runner = runner->next;
		count += 1;
	}
	if (count == 1)
	return;
	while (marker != NULL)
	{
		head = *list;
		while (head->n < head->next->n)
		{
			head = head->next;
			if (head->next == NULL)
			break;
		}
		end_sorted_list = head;
		if (end_sorted_list->next == NULL)
		begin_unsorted_list = end_sorted_list;
		else
		begin_unsorted_list = end_sorted_list->next;
		while ((begin_unsorted_list->n < begin_unsorted_list->prev->n)
										 && (begin_unsorted_list->prev != NULL))
		{
			swap_nodes(begin_unsorted_list->prev, begin_unsorted_list);
			end_sorted_list = begin_unsorted_list->prev;

			if (begin_unsorted_list->prev == NULL)
			{
				*list = begin_unsorted_list;
				print_list(*list);
				break;
			} print_list(*list);
		} marker = marker->next;
	}
}

#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number
 * of elements in a linked list_t list.
 * @h: pointer to a node
 * Return: number of nodes
*/
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}

return (count);
}

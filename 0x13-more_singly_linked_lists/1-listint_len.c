#include <stdio.h>
#include "lists.h"
/**
 * listint_len - to return the number of elements in a linked list
 * @h: Pointer to the head of the list
 * Return: Number of elements of the linked list
*/
size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		count = count + 1;
		h = h->next;
	}

return (count);
}

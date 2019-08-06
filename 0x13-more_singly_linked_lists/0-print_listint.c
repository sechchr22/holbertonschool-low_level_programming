#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - to print all the elements of a listint_t list
 * @h: pointer that recieves the head
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count = count + 1;
	}

return (count);
}

#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth
 * node of a listint_t linked list
 * @head: reference (pointer to pointer) to the head
 * of a list
 * @index: number that indicate the node i want
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *last = head;

	while (i < index)
	{
		if (last == NULL)
		return (NULL);

		last = last->next;
		i++;
	}

return (last);
}

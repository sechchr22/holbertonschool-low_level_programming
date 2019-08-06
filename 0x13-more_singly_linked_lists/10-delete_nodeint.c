#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list
 * @head: reference (pointer to pointer)
 * to the head of a list
 * @index: my index
 * Return: 1 if it succed, -1 otherwise
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0, counter_1 = 0;

	listint_t *current, *prev, *buf, *count;

	current = *head;
	count = *head;

	if (head == NULL || *head == NULL)
	return (-1);

	while (count != NULL)
	{
		counter_1 = counter_1 + 1;
		count = count->next;
	}

	switch (index)
	{
		case 0:
			buf = current->next;
			free(*head);
			*head = buf;
			return (1);

		default:
			if (index > counter_1)
			return (-1);

			while (i < index)
			{
				prev = current;
				current = current->next;
				i++;
			}
			prev->next = current->next;
			free(current);
			return (1);
	}
}

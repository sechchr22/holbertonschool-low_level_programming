#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_nodeint_end - function to add a new node at the end
 *@head: reference (pointer to pointer) to the head of a list
 *@n: just an int
 *Return: address of the new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last = *head;

	new = (struct listint_s *)malloc(sizeof(struct listint_s));

	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (last->next != NULL)
	last = last->next;

	last->next = new;

return (new);
}

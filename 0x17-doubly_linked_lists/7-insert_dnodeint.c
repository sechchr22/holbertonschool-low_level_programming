#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert a node at a index position
 * in a double linked list
 * @h: double pointer holding pointer head of the list
 * @idx: position indexed by user
 * @n: data in the new node
 * Return: Adress of the new node
*/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *temp, *new;

	if ((*h == NULL && idx != 0) || (idx > dlistint_len(*h)))
	return (NULL);

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;
	if (idx == 0)
	{
		if (dlistint_len(*h) == 0)
		{
			*h = new;
			new->prev = NULL;
			new->next = NULL;
			return (new);
		}
		else
		{
			new->prev = NULL;
			new->next = *h;
			(*h)->prev = new;
			*h = new;
		}
	return (new);
	}
	else if (idx == dlistint_len(*h))
	return (add_dnodeint_end(h, n));

	temp = *h;
	for (i = 0; i < idx; i++)
	temp = temp->next;
	new->next = (temp->prev)->next;
	(temp->prev)->next = new;
	new->prev = temp->prev;
	temp->prev = new;
return (new);
}

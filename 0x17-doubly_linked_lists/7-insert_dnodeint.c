#include "lists.h"

/**
 * dlistint_len - function to know len of the double linked list
 * @h: pointer to the head of the list
 * Return: Number of nodes in the list
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t cont = 0;
	const dlistint_t *temp;

	if (h == NULL)
	return (0);

	temp = h;

	while (temp->next != NULL)
	{
		temp = temp->next;
		cont++;
	}
	cont++;

return (cont);
}

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

	temp = *h;
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
	return (insert_dnodeint_at_end(temp, new));

	for (i = 0; i < idx; i++)
	temp = temp->next;
	new->next = (temp->prev)->next;
	(temp->prev)->next = new;
	new->prev = temp->prev;
	temp->prev = new;
return (new);
}

/**
 * insert_dnodeint_at_end - insert node at the end of a double linked list
 * @temp: pointer holding head of the list
 * @newi: pointer holding the new node
 * Return: Address of the new node
*/

dlistint_t *insert_dnodeint_at_end(dlistint_t *temp, dlistint_t *newi)
{
	while (temp->next != NULL)
	temp = temp->next;

	newi->prev = (temp->prev)->next;
	temp->next = newi;
	newi->next = NULL;

return (newi);
}

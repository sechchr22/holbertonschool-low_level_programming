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
 * add_dnodeint_end - function to add a node at the end
 * of a double linked list
 * @head: Double pointer holding pointer head of the list
 * @n: integer to be in each new node
 * Return: Address of the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	temp = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (temp == NULL)
	return (NULL);

	temp = *head;
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
	}

	else if (dlistint_len(*head) == 1)
	{
		new->next = NULL;
		(*head)->next = new;
		new->prev = *head;
	}

	else
	{
		while (temp->next != NULL)
		temp = temp->next;

		new->next = NULL;
		temp->next = new;
		new->prev = temp;
	}

return (new);
}

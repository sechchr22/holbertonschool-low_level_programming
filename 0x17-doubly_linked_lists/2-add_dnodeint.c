#include "lists.h"

/**
 * add_dnodeint - function to add a node at the beggining
 * of a double linked list
 * @head: Double pointer holding the pointer head of the list
 * @n: integer in the new node
 * Return: Address of the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = (dlistint_t *)malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
	}

	else
	{
		(*head)->prev = new;
		new->next = *head;
		new->prev = NULL;
		*head = new;
	}

return (new);
}

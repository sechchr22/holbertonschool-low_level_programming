#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 * add_nodeint - to add a new node
 * @head: double pointer that will hold the address of a pointer
 * to the head of the list
 * @n: just a data int type
 * Return: the new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = (struct listint_s *)malloc(sizeof(struct listint_s));
	if (new == NULL)
	return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

return (new);
}

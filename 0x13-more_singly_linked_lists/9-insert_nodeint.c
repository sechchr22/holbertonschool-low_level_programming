#include <stdlib.h>
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
/**
 * insert_nodeint_at_index - to add a node in certain position
 * @head: reference (pointer to pointer) to the head of a list
 * @idx: place where i want to add the new node
 * @n: data of the new node
 * Return: address of the new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0, count = 0;

	listint_t *prev, *new, *need;
	listint_t *check = *head;

	while (check != NULL)
	{
		count = count + 1;
		check = check->next;
	}

	if (idx > count || head == NULL)
	return (NULL);

	if (idx == 0)
	return (add_nodeint(head, n));

	new = (struct listint_s *)malloc(sizeof(struct listint_s));
	
	if (new == NULL)
	return (NULL);

	new->n = n;
	need = *head;

	while (i < idx)
	{
		prev = need;
		need = need->next;
		i++;
	}

	prev->next = new;
	new->next = need;

return (new);
}

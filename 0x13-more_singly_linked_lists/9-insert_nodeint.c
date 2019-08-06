#include <stdlib.h>
#include "lists.h"
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

	listint_t *prev, *new;
	listint_t *need = *head;
	listint_t *check = *head;

	while (check != NULL)
	{
		count = count + 1;
		check = check->next;
	}

	if (idx > count)
	return (NULL);

	new = (struct listint_s *)malloc(sizeof(struct listint_s));

	if (new == NULL)
	return (NULL);

	new->n = n;

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

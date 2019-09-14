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
 * get_dnodeint_at_index - function to get node at index position
 * @head: Pointer head of the list
 * @index: Index by user
 * Return: Address of the node at index position
*/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (head == NULL || index > dlistint_len(head))
	return (NULL);

	temp = head;

	for (i = 0; i < index; i++)
	temp = temp->next;

return (temp);
}

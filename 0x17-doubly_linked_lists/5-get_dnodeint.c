#include "lists.h"

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

	if (head == NULL)
	return (NULL);

	temp = head;

	for (i = 0; i < index; i++)
	temp = temp->next;

return (temp);
}

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

#include "lists.h"
/**
 * print_dlistint - function to print elements from a double linked list
 * @h: pointer to the head of the list
 * Return: Number of nodes in the list
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t cont = 0;
	const dlistint_t *temp;

	if (h == NULL)
	return (0);

	temp = h;

	while (temp->next != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		cont++;
	}

	printf("%d\n", temp->n);
	cont++;

return (cont);
}

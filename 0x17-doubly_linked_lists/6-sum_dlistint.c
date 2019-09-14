#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data (n)
 * from the double linked list
 * @head: pointer head of the list
 * Return: sum of all the data, 0 if it is empty
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	if (head == NULL)
	return (0);

	while (temp->next != NULL)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

sum = sum + temp->n;
return (sum);
}

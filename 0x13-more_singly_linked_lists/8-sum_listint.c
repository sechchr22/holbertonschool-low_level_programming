#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - function that returns the sum
 * of all the data (n)
 * @head: reference (pointer to pointer) to the head
 *  of a list
 * Return: sum of all the data
*/
int sum_listint(listint_t *head)
{
	int count = 0;

	if (head == NULL)
	return (0);

	while (head)
	{
		count = count + head->n;

		head = head->next;
	}

return (count);
}

#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - function to delete the head node
 * and return the data of it
 * @head: reference (pointer to pointer)
 * to the head of a list
 * Return: the int data from the node i delete
*/
int pop_listint(listint_t **head)
{

	listint_t *buf = (*head)->next;
	int n;

	if (*head == NULL)
	return (0);

	n = (*head)->n;

	free(*head);
	*head = buf;

return (n);
}

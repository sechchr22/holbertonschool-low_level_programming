#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Write a function that frees a listint_t list
 * @head: the head of the list
 * Return: nothing success
*/
void free_listint(listint_t *head)
{
	listint_t *buf;

	while (head)
	{
		buf = head;
		head = head->next;
		free(buf);
	}
}

#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - Write a function that frees a listint_t list
 * and set the head to null
 * @head: the head of the list
 * Return: nothing success
*/
void free_listint2(listint_t **head)
{
	listint_t *act = *head, *next;

	while (act != NULL)
	{
		next = act->next;
		free(act);
		act = next;
	}

	*head = NULL;
}

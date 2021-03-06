#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
*_strlen - Return the lenght of a string
*@s: name of the pointer
*Return: lenght of the string
*/
int _strlen(const char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}

	return (len);
}
/**
 * add_node_end - Write a function that adds a new node
 * at the end of a list_t list
 * @head: pointer that points to &head
 * @str: pointer to string
 * Return: Pointer to new node
*/
list_t *add_node_end(list_t **head, const char *str)
{

	list_t *new;
	list_t *temp = *head;

	new = (struct list_s *)malloc(sizeof(struct list_s));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;
	return (*head);
}

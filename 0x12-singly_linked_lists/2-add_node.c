#include "lists.h"
#include <stdlib.h> 
#include <stdio.h>
#include <string.h>
/**
*_strlen - Return the lenght of a string
*@s: name of the pointer
*Return: lenght of the string
*/
unsigned int _strlen(const char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}

	return (len);
}
/*
*
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *x = *head;

	x = (struct list_s*)malloc(sizeof(struct list_s));
	
	if (x == NULL)
	{
		printf("Error\n");
       	 	return (NULL);
	}
	
	x->str = strdup(str);
	x->len = _strlen(str);
	x->next = *head;
	*head = x;

return (x);
}

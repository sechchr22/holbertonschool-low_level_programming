#include "lists.h"


/**
 * delete_dnodeint_at_index - function to delete a node at index
 * @head: double pointer holding pointer head of list
 * @index: index by user
 * Return: 1 if succed -1 otherwise
*/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp;

	if (*head == NULL || (index > dlistint_len(*head)))
	return (-1);

	temp = *head;

	if (dlistint_len(*head) == 1) /*si solo tiene un nodo*/
	return (delete_just_one(head, temp, index));

	else if (index == 0) /*si tiene mas de uno e index es el primer nodo*/
	return (delete_first(head, temp));

	else if (index == dlistint_len(*head)) /*+1 nodo e index es el ultimo nodo*/
	return (delete_last(temp, index));

	else /*para todos los demás index si tiene más de un nodo*/
	{
		for (i = 0; i < index; i++)
		temp = temp->next;

		(temp->next)->prev = temp->prev;
		(temp->prev)->next = temp->next;
		temp->next = NULL;
		temp->prev = NULL;
		free(temp);
	}

return (1);
}

/**
 * delete_just_one - to delete a node in a double linked list
 * of just one node
 * @head: Double pointer holding pointer head of list
 * @temp: temp pointer holding the same address as head
 * @index: index by user
 * Return: 1 if succed -1 otherwhise
*/

int delete_just_one(dlistint_t **head, dlistint_t *temp, unsigned int index)
{
	if (index != 0)
	return (-1);

	*head = NULL;
	free(temp);

return (1);
}

/**
 * delete_first - function to delete first node of a double linked list
 * @head: Double pointer holding pointer head of list
 * @temp: temp pointer holding the same address as head
 * Return: 1 always success
*/

int delete_first(dlistint_t **head, dlistint_t *temp)
{
	*head = temp->next;
	(temp->next)->prev = NULL;
	temp->next = NULL;
	free(temp);

return (1);
}

/**
 * delete_last - function to delete last node of a double linked list
 * @temp: temp pointer holding the same address as head
 * @index: index by user
 * Return: 1 always success
*/

int delete_last(dlistint_t *temp, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	temp = temp->next;

	(temp->prev)->next = NULL;
	temp->prev = NULL;
	free(temp);

return (1);
}

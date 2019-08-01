#include <stdio.h>
#include "lists.h"
/**
 * print_list - function that prints all
 * the elements of a list_t list
 * @h: pointer to struct list_s
 * Return: Number of nodes
*/
size_t print_list(const list_t *h)
{
	char *b;
	unsigned int count = 0, c;

	while (h != NULL)
	{
		b = h->str;
		c = h->len;

		if (b == NULL)
		{
			b = "(nil)";
			c = 0;
		}
		printf("[%d] %s\n", c, b);
		h = h->next;
		count = count + 1;
	}

return (count);
}

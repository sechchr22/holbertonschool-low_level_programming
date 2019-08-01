#include <stdio.h>
#include "lists.h"
/*
*
*/
size_t list_len(const list_t *h)
{
	unsigned int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count = count + 1;
	}

return (count);
}
	

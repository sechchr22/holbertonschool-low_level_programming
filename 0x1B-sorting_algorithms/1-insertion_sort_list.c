#include "sort.h"
/**
 * insertion_sort_list - sort list by inserting nodes
 *
 * @list: list to be sorted
 *
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *limit, *cmp, *uns;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	limit = *list;
	if (limit->next)
		uns = limit->next;
	while (limit->next)
	{
		if (uns->n >= limit->n)
			limit = limit->next;
		cmp = limit;
		if (limit->next)
			uns = limit->next;
		while (cmp)
		{
			if (uns->n < cmp->n)
			{
				switch_n(&cmp, &uns);
				if ((*list)->prev)
					*list = (*list)->prev;
				print_list(*list);
			}
			cmp = cmp->prev;
		}
	}
}
/**
 * switch_n - switch nodes
 *
 * @un: node to be added in organized section
 * @cm: to to compare with
 *
 */
void switch_n(listint_t **cm, listint_t **un)
{
	listint_t *c, *u;

	c = *cm;
	u = *un;

	u->prev = u->prev->prev;
	c->next = c->next->next;

	if (c->prev)
		c->prev->next = u;
	if (u->next)
		u->next->prev = c;

	u->next = c;
	c->prev = u;

	c = c->prev;
}

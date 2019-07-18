#include <stdlib.h>
/**
*malloc_checked - function that allocates memory using malloc
*@b: integer
*Return: 0 success, 98 status if malloc fails,
*pointer to the resultant string otherwise
*/
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
	exit(98);

return (s);
}

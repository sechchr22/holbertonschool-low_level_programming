#include <stdlib.h>
/**
*_calloc - function that allocates memory for an array,
*and inizializated with 0
*@nmemb: number of variables i want to store
*@size: size of variable
*Return: Null if one parameter is 0 or if malloc fails
*pointer to the resultant array otherwise
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *s;
	unsigned int i, a;

	if (nmemb == 0 || size == 0)
	return (NULL);

	s = malloc(nmemb * size);

	if (s == NULL)
	return (NULL);

	a = nmemb * size;

	for (i = 0; i < a; i++)
	{
		s[i] = 0;
	}

return (s);
}

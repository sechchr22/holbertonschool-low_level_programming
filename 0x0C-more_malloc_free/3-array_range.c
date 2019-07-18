#include <stdlib.h>
/**
*array_range - Write a function that creates an array of integers
*@min: first number of the array
*@max: last number of the array
*Return: NULL if min > max or if malloc fails
*pointer to the resultant string otherwise
*/
int *array_range(int min, int max)
{
	int *s;
	int i, size, range;

	range = max - min;

	if (min > max)
	return (NULL);

	if (min == 0)
	size = max + 1;
	else
	size = range + 1;

	s = malloc(size * sizeof(int));
	if (s == NULL)
	return (NULL);

	s[0] = min;

	for (i = 1; i <= range; i++)
	{
		s[i] = min + i;
	}

	s[i] = max;

return (s);
}

#include <stdio.h>
/**
 * int_index - function to search below a treshold
 * @array: pointer to an array
 * @size: size of the array
 * @cmp: pointer to a function that takes an int
 * and return an int
 * Return: index of the elemnt if find a match
 * -1 otherwise or if size <= 0
 * or 0 if array or cmp are NULL
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int *p = array;

	if (array == NULL || cmp == NULL)
	return (0);

	if (size <= 0)
	return (-1);

	for (i = 0; i < size; i++)
	{
		cmp(*(array + i));

		if (cmp(p[i]))
		return (i);
	}

	return (-1);
}

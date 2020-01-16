#include "search_algos.h"

/**
 * linear_search - Linear search a value in an array
 * @array: pointer to an array of int
 * @size: size of the array
 * @value: value to search
 * Return: value's index
*/

int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}

return (-1);
}

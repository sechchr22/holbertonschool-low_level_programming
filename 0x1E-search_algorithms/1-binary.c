#include "search_algos.h"

/**
 * print_array - to print an array
 * @array: pointer to an array of int
 * @l: lowest index
 * @h: highest index
 * Return: nothing
*/

void print_array(int *array, unsigned int l, size_t h)
{
	unsigned int i = 0;

	if (l == h)
	{
		printf("Searching in array: %d\n", array[l]);
		return;
	}

	printf("Searching in array: ");

	for (i = l; i <= h; i++)
	{
		if (i == h)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}
}

/**
 * recursive - recursive binary search function
 * @array: pointer to an array of int
 * @l: lowest index
 * @h: highest index
 * @value: value to find
 * Return: index of value to search or -1 otherwise
*/

int recursive(int *array, unsigned int l, size_t h, int value)
{
	unsigned int m = 0;

	if (h >= l)
	{
		m = l + (h - l) / 2;

		if (array[m] == value)
		{
			print_array(array, l, h);
			return (m);
		}

		if (array[m] > value)
		{
			print_array(array, l, h);
			return (recursive(array, l, (m - 1), value));
		}

		print_array(array, l, h);

		return (recursive(array, (m + 1), h, value));
	}

return (-1);
}

/**
 * binary_search - main function to use a bainary search algorithm
 * @array: pointer to an array of int
 * @size: size of the array
 * @value: value to find
 * Return: index of the value to find
*/

int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive(array, 0, (size - 1), value));
}

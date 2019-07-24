#include <stdio.h>
/**
 * array_iterator - function to call another function
 * @array: pointer to an array of ints
 * @size: size of the array
 * @action: pointer to a function that takes an int and
 * return nothing
 * Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
		action(*(array + i));
	}
}

#include "sort.h"
/**
 * bubble_sort - sort array
 *
 * @array: Array to organize
 * @size: Size of the array
 *
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i = 0, j = 0;
	int tmp;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
			}
			print_array(array, size);
		}
	}
}

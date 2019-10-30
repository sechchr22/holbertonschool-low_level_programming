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
	size_t i = 0, j = 0;
	int stop = 0;

	if (size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		stop = 0;
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				switch_a(&array[j], &array[j + 1]);
				print_array(array, size);
				stop = 1;
			}
		}
		if (stop == 0)
			break;
	}
}
/**
 * switch_a - switch array elemtnts
 *
 * @p_a: pointer to first position
 * @p_b: pointer to second position
 *
 */
void switch_a(int *p_a, int *p_b)
{
	int temp;

	temp = *p_a;
	*p_a = *p_b;
	*p_b = temp;
}

#include "sort.h"
/**
*swap_int - swap the values of two integers using pointers
*@a: pointer 1
*@b: pointer 2
*Return: always 0
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

/**
 * lomutos_partition - lomuto partition
 * @arr: pointer to array
 * @lo: lower index
 * @hi: higher index
 * @size: array size
 * Return: nothing
*/

int lomutos_partition(int *arr, int lo, int hi, size_t size)
{
	int pivot = 0;
	int i = 0, j = 0;

	pivot = arr[hi];
	i = lo - 1;

	for (j = lo; j <= hi; j++)
	{
		if (arr[j] <= pivot)
		{
			i += 1;
			if (i != j)
			{
				swap_int(&arr[i], &arr[j]);
				print_array(arr, size);
			}
		}
	}
	return (i);
}

/**
 * recursion - recursive function
 * @arr: pointer to array
 * @low: lower index
 * @high: higher index
 * @size: array size
 * Return: nothing
*/

void recursion(int *arr, int low, int high, size_t size)
{
	int pi = 0;

	if (low < high)
	{
		pi = lomutos_partition(arr, low, high, size);

		recursion(arr, low, pi - 1, size);
		recursion(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - quick sort function
 * @array: pointer to array
 * @size: array size
 * Return: nothing
*/

void quick_sort(int *array, size_t size)
{
	int low = 0, high = 0;

	if (size <= 1 || array == NULL || size == 0)
	return;

	low = 0;
	high = size - 1;

	recursion(array, low, high, size);
}

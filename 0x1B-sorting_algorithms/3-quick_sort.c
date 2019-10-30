#include "sort.h"
/**
 * swap - swap 2 elements from the array
 * @arr: pointer to array
 * @i: int
 * @j: int
 * Return: nothing
*/

void swap(int *arr, int i, int j)
{
	int temp;

	temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

/**
 * lomutos_partition - lomuto partition
 * @arr: pointer to array
 * @lo: lower index
 * @hi: higher index
 * @size: array size
 * Return: nothing
*/

int lomutos_partition(int *arr, size_t lo, size_t hi, size_t size)
{
	int pivot;
	size_t i, j;

	pivot = arr[hi];
	i = lo;

	for (j = lo; j < hi; j++)
	{
		if (arr[j] <= pivot)
		{
			swap(arr, i, j);
			if (i != j)
			print_array(arr, size);
			i += 1;
		}
	}
	swap(arr, i, hi);
	if (i != hi)
	{
		print_array(arr, size);
		return (hi);
	}
	else
	return (hi - 1);
}

/**
 * recursion - recursive function
 * @arr: pointer to array
 * @low: lower index
 * @high: higher index
 * @size: array size
 * Return: nothing
*/

void recursion(int *arr, size_t low, size_t high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = lomutos_partition(arr, low, high, size);

		recursion(arr, low, pi, size);
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
	size_t low, high;

	if (size <= 1 || array == NULL || size == 0)
	return;

	low = 0;
	high = size - 1;

	recursion(array, low, high, size);
}

#include "holberton.h"
/**
 * get_bit - returns value of a bit at a given index
 * @n: Number
 * @index: bit position to return
 * Return: 1 or 0 depending the index
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8))
	return (-1);

	a = n >> index;

	if ((a & 1) == 1)
	return (1);

	else
	return (0);
}


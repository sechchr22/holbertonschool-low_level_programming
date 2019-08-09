#include "holberton.h"
/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number
 * @index: bit position
 * Return: 1 if it works -1 otherwise
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	int var;

	if (index > (sizeof(unsigned long int) * 8))
	return (-1);

	var = ~(1 << index);

	*n = *n & var;

	return (1);
}

#include "holberton.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to work it
 * @index: bit position
 * Return: new n
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int var;

	if (index > (sizeof(unsigned long int) * 8))
	return (-1);

	var = 1 << index;

	*n = *n | var;

	return (1);
}

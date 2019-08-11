#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits changed from n to m
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int compare = 0;
	unsigned int counter = 0;

	compare = n ^ m;

	while (compare >> 1)
	{
		if ((compare & 1) == 1)
		counter++;

		compare = compare >> 1;
	}
	counter++;

return (counter);
}

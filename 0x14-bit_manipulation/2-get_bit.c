#include "holberton.h"
/*
*
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


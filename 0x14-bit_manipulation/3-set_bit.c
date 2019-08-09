#include "holberton.h"
/*
*
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	int var;

	var = 1 << index;

	*n = *n | var;

	return (*n);
}

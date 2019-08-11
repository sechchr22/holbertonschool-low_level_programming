#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int i;
	unsigned long int n_c, var;

	if ((n == 0) | (n == 1))
	{
		_putchar(n + '0');
		return;
	}

	i = 0;

	n_c = n;
	while (n >> 1)
	{
		n = n >> 1;
		i++;
	}
	
	while (i >= 0)
	{
		var = (n_c >> i);

		if (var & 1)
		_putchar('1');

		else
		_putchar('0');

		i--;
	}
}

#include "holberton.h"
#include <stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int i, j;
	unsigned long int n_c;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	i = 0;

	n_c = n;
	while (n >> 1)
	{
		n = n >> 1;
		i++;
	}

	j = i - 1;
	while (j >= 0)
	{
		n_c = n_c >> 1;

		if (n_c & 1)
		_putchar('1');

		else
		_putchar('0');

		j--;
	}
}

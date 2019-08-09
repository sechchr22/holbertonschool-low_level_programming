#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number
 * Return: nothing
*/
void print_binary(unsigned long int n)
{
	int i, j, var;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (n >> i)
	{
		i++;
	}

	j = i - 1;

	while (j >= 0)
	{
		var = n >> j;

		if (var & 1)
		_putchar('1');

		else
		_putchar('0');

		j--;
	}
}

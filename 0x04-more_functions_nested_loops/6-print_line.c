#include "holberton.h"
/**
*print_line - print line n times
*@n: variable that will say how many times print the line
*Return: 0
*/
void print_line(int n)
{
	int x;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
	for (x = 0; x < n; x++)
	{
		_putchar('_');
	}
	_putchar ('\n');
	}
}

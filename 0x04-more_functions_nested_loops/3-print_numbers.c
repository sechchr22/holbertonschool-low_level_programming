
#include "holberton.h"
/**
*print_numbers - to print numbers from 0 to 9
*Return: 0
*/
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}

	_putchar ('\n');
}
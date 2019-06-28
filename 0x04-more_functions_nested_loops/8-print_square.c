#include "holberton.h"
/**
*print_square - to print a square "size" times
*@size: number of times
*Return: 0
*/
void print_square(int size)
{
	int x;
	int j;

	if (size == 0)
	{
		_putchar('\n');
	}
	else
	{
	for (x = 0 ; x < size; x++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
			_putchar('\n');
	}	
	}
}

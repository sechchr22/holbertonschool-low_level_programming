#include "holberton.h"
/**
*print_triangle - to print a triangle
*Return: always 0
*/
void print_triangle(int size)
{
	int x;
	int j;
	int k;

	for (x = 1 ; x < size ; x++)
	{
		for (j = (size - 1) ; j > 0; j --)
		{
			_putchar(' ');
			for (k = 1; k < size; k++)
			{
			_putchar(35);
			}
		}
	_putchar('\n');		
	}
}


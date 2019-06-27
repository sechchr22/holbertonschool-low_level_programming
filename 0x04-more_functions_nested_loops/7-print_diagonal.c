#include "holberton.h"
/**
*print_diagonal - to print a diagonal n times
*@n: times that we will print "/"
*Return: 0
*/
void print_diagonal(int n)
{
	int x;
	int j;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{

			for (j = 0; j < x; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}

}


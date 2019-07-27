#include "holberton.h"
/**
*print_chessboard - function that prints the chessboard
*@a: multidimensional array with the characters of the chessboard
*Return: always 0
*/
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				if (a[i][j] == ' ')
				{
					_putchar(' ');
					_putchar('\n');
				}
				else
				{
					_putchar(a[i][j]);
					_putchar('\n');
				}
			}

			else if (a[i][j] == ' ')
			_putchar(' ');

			else
			_putchar(a[i][j]);
		}
	}
}

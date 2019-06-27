#include "holberton.h"
/**
*more_numbers - to print from 1 to 14 , 10 times
*Return: 0
*/
void more_numbers(void)
{
	int x;
	int j;

	for (x = 0; x <= 10; x++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
			_putchar (j / 10 + '0');
			}
		_putchar (j % 10 + '0');
		}
	_putchar('\n');
	}
}

#include "holberton.h"
/**
*puts_half - function that prints half of a string, followed by a new line
*@str: name of the pointer
*Return: always 0
*/
void puts_half(char *str)
{
	int len = 0;
	int x;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (x = (len / 2); x <= (len - 1); x++)
		{
			_putchar(str[x]);
		}
			_putchar('\n');
	}
	else if (len % 2 != 0)
	{
		for ((x = (len / 2) + 1); x <= (len - 1); x++)
		{
			_putchar(str[x]);
		}
			_putchar('\n');
	}
}

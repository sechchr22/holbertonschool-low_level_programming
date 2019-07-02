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
		for (x = (len / 2); x <= len; x++)
		{
			_putchar(str[x]);
		}
			_putchar('\n');
	}
	else
	{
		for ((x = ((len - 1) / 2)); x <= len; x++)
		{
			_putchar(str[x]);
		}
			_putchar('\n');
	}
}

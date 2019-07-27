#include "holberton.h"
/**
*puts2 - function to print one char out of 2
*@str: name of the string
*Return: always 0
*/
void puts2(char *str)
{
	int x = 0;

	for (x = 0; str[x] != '\0'; x++)
	{
		if ((x % 2 == 0))
		{
			_putchar(str[x]);
		}
	}
	_putchar('\n');
}

#include "holberton.h"
/**
*puts2 - function to print one char out of 2
*@str: name of the string
*Return: always 0
*/
void puts2(char *str)
{
	int x;

	for (x = 0; x <= 8; x += 2)
	{
		_putchar(str[x]);
	}
		_putchar('\n');
}

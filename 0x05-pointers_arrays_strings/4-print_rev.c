#include "holberton.h"
/**
*print_rev - to print a string backwards
*@s: nombre del puntero
*return: always 0
*/
void print_rev(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}

	for (j = (i - 1) ; j >= 0; j--)
	{
		_putchar(s[j]);
	}
		_putchar('\n');
}

#include "holberton.h"
/**
*_puts_recursion - function that prints a string, followed by a new line
*@s: name of the pointer
*Return: always 0, successs
*/
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else if (*s == s[0])
	{
		_putchar(s[0]);
	}
	else
	{
		_putchar(*s);
	}

s++;
_puts_recursion(s);

}


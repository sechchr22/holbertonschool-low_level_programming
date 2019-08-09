#include <stdio.h>
#include "holberton.h"
/**
*_pow_recursion - function that returns the value of x raised to the power of y
*@x: base
*@y: power
*Return: 1 if y is 0, -1 if y is less than 0,
*result x raised to the power of y otherwise
*/
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	return (x * _pow_recursion(x, y - 1));
}
/**
*_strlen - Return the lenght of a string
*@s: name of the pointer
*Return: lenght of the string
*/
unsigned int _strlen(const char *s)
{
	unsigned int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}

	return (len);
}
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 1 and 0
 * Return: decimal translate of the binary number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i, count, check, pot;
	int exp;

	if (b == NULL)
	return (0);

	check = 0;
	while (b[check] != '\0')
	{
		if (b[check] != '1' && b[check] != '0')
		return (0);
		check++;
	}

	i = 0;
	count = 0;
	len = _strlen(b);

	while (i < len)
	{
		exp = len - (i + 1);
		pot = _pow_recursion(2, exp);

		if (b[i] == '0')
		count = count + 0;

		else if (b[i] == '1')
		count = count + pot;

		i++;
	}

return (count);
}

#include <stdlib.h>

/**
*_strlen - Return the lenght of a string
*@s: name of the pointer
*Return: lenght of the string
*/

int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}

	return (len);
}

/**
*str_concat - Write a function that concatenates two strings
*@s1: first string
*@s2: second string
*Return: Null if an string is Null or malloc fails,
*pointer to the resultant string otherwise
*/

char *str_concat(char *s1, char *s2)
{
	int a, b, c, i, j;
	char *s;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	a = _strlen(s1);
	b = _strlen(s2);

	c = (a + b + 1);

	s = malloc(c);

	if (s == NULL)
	{
		return (s);
	}

	for (i = 0; i < a; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < b; j++)
	{
		s[i + j] = s2[j];
	}

	s[i + j + 1] = '\0';

return (s);
}


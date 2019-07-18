#include <stdlib.h>

/**
*_strlen - Return the lenght of a string
*@s: name of the pointer
*Return: lenght of the string
*/
unsigned int _strlen(char *s)
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
*string_nconcat - function that concatenates two strings
*@s1: first string
*@s2: second string
*@n: first n bytes from s2
*Return: NULL if malloc fails
*pointer to the resultant string otherwise
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len;
	char *s;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	if (n >= _strlen(s2))
	n = _strlen(s2);

	len = ((_strlen(s1) + _strlen(s2))*sizeof(char)) + 1;

	s = malloc(len);

	for (i = 0; i < _strlen(s1); i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; j < n; j++)
	{
		s[i + j] = s2[j];
	}

	s[i + j] = '\0';

return (s);
}


#include <stdlib.h>
#include <stdio.h>

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
*_strdup - function that returns a pointer to a newly allocated space in memory
*@str: my parameter pointer
*Return: Null if str is null or if is insufficient memory available
*retultant string otherwise
*/

char *_strdup(char *str)
{
	char *s;
	int a;
	int i;

	if (str == NULL)
	{
		return (NULL);
	}

	a = _strlen(str);

	s = malloc(a + 1);

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < a; i++)
	{
		s[i] = str[i];
	}
		s[i + 1] = '\0';

return (s);
}

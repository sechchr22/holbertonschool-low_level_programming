#include <stdio.h>
#include <string.h>
#include <stdlib.h>
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

	a = strlen(str);

	if (str == NULL)
	{
		return (NULL);
	}

	s = malloc(a);

	if (s == NULL)
	{
		return (s);
	}

	for (i = 0; i < a ; i++)
	{
		s[i] = str[i];
	}

return (s);
}

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
*argstostr - function that concatenates the arguments
*@ac: argument count
*@av: argument vector
*Return: NULL if ac or av equal to 0 or if malloc fails
*pointer to resultant string otherwise
*/

char *argstostr(int ac, char **av)
{
	char *buf;
	int i, a, m, l, k;
	int sum = 0;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (i = 0; i < ac; i++)
	{
		a = _strlen(av[i]);
		sum = sum + a;
	}

	buf = malloc(sum * sizeof(char));

	if (buf == NULL)
	return (NULL);

	k = 0;

	for (m = 0; m < ac; m++)
	{
		for (l = 0; av[m][l] != '\0'; l++)
		{
			buf[k] = av[m][l];
			k++;
		}

		buf[k] = '\n';
	}

return (buf);
}

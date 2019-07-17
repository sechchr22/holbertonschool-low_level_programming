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
*/

char *argstostr(int ac, char **av)
{
	char *buf;
	int i, a, m, l; 
	int sum = 0;

	if (ac == 0 || av == NULL)
        return (NULL);
	
	for (i = 0; i < ac; i++)
	{
		a = _strlen(av[i]);		
		sum = sum + a;
	}

	printf("%d\n", sum);	

	buf = malloc(sum * sizeof(char));	
	
	if (buf == NULL)
	return (NULL);
 	
	for (m = 0; m < ac; m++)
	{
		for (l = 0; av[m][l] != '\0'; l++)
		{
			buf[m + l] = av[m][l];
		}

		buf[m + l] = '\n';
	}
	
return (buf);
}

#include <stdio.h>
#include <stdlib.h>
/**
*create_array - creates an array of chars and initializes it
*@size: size of bytes that im goint to allocate
*@c: just a char
*Return: null if size is 0 or if malloc fails, resultant string otherwise
*/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size);

	if (s == NULL)
	{
		return (s);
	}

	else
	{

		for (i = 0; i < size; i++)
		{
			s[i] = c;
		}
	}

return (s);
}


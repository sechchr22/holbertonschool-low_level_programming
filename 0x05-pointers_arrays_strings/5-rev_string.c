#include <stdio.h>
/**
*rev_string - function to reverse a string
*@s: name of the pointer
*Return: always 0
*/
void rev_string(char *s)
{
	int i;
	int x;
	char c;
	int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}

	x = (j - 1);

	for (i = 0; i <= x; i++)
	{
		if (i == x)
		{
		break;
		}
		else
		{
		c = s[i];
		s[i] = s[x];
		s[x] = c;
		x--;
		}
	}
}

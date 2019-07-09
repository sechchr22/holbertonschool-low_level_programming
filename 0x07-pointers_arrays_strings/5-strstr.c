#include <stdio.h>
/**
*_strstr - Write a function that locates a substring
*@haystack: main C string to be scanned
*@needle: small string to be searched with-in haystack string.
*Return: pointer to the value of small string if it matchs, null if not.
*/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			k = j;
			while (needle[i] == haystack[j] && needle[i] != '\0')
			{
				i++;
				j++;
			}
			if (needle[i + 1] == '\0')
			{
				return (haystack + k);
			}

		}
	}
return ('\0');
}

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

	for (i = 0; haystack[i] != '\0'; i++)
	{
		j = 0;
		k = i;

			while (needle[j] == haystack[i] && needle[j] != '\0')
			{
				i++;
				j++;
			}
			if (needle[j] == '\0')
			{
				return (haystack + k);
			}



	}
return (0);
}

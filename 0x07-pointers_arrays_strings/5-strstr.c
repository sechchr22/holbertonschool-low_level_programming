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

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				while (needle[i] == haystack[i] && needle[i] != '\0')
				{
					i++;
					j++;
				}
				return (needle);
			}
		}
	}
return ('\0');
}

/**
*_strspn - function that gets the length of a prefix substring
*@s: name of the pointer
*@accept: name of the second pointer
*Return: the number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	int x;
	int y;
	unsigned int k;

	k = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
			{
				k = k + 1;
				break;
			}
			if (accept[y + 1] == '\0')
			return (k);
		}
	}
return (k);
}

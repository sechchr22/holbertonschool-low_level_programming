/**
*_strchr - function to write a function that locates a character in a string
*@s: name pointer
*@c: character to share
*Return: pointer to the resultant string s
*/
char *_strchr(char *s, char c)
{
	int x;
	int k;
	int y;

	k = 0;

	for (x = 0; s[x] != '\0'; x++)
	{

		if (s[x] == c)
		{
			for (y = x; s[y] != '\0'; y++)
			{
				s[k] = s[y];
				k++;
			}
		}

		if (s[x + 1] == s[x])
		break;
	}
return (s);
}


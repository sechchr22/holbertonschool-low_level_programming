

/**
*leet - function that encodes a string into 1337
*@s : name of the pointer
*Return: Pointer to the resulting string s
*/
char *leet(char *s)
{
	int a1[] = {97, 101, 111, 116, 108};
	int a2[] = {52, 51, 48, 55, 49};
	int x;
	int y;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; a1[y] != '\0'; y++)
		{
			if (s[x] == a1[y] || s[x] == (a1[y] - 32))
			s[x] = a2[y];
		}
	}
return (s);
}

/**
*rot13 - function that encodes a string using rot13
*@s: name of the pointer
*Return: Pointer to the resulting string s
*/
char *rot13(char *s)
{
	int x, y;
	int alp[26] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109,
			110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 26 ; y++)
		{
			if (s[x] == alp[y])
			s[x] = alp[y] - 13;
		}
	}
return (s);
}

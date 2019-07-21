/**
*_strchr - function to write a function that locates a character in a string
*@s: name pointer
*@c: character to share
*Return: pointer to the resultant string s depending on the condition
*/
char *_strchr(char *s, char c)
{
	int x;

	if (c == '\0')
	return ('\0');

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		return (s + x);
	}

return ('\0');
}

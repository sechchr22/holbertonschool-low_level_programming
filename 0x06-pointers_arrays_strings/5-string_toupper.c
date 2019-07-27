/**
*string_toupper - function to change lower to uppercase from a string
*@s: pointer name
*Return: Pointer that points to the value of pitochu
*/
char *string_toupper(char *s)
{
	int x;
	int j;

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}

	for (j = 0; j < x; j++)
	{
		if (s[j] >= 97 && s[j] <= 122)
		{
			s[j] -= 32;
		}
	}

return (s);
}

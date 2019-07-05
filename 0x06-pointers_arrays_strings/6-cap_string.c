/**
*cap_string - function to capitalize a text
*@s: name of the pointer
*Return: pointer that points to the value of s
*/
char *cap_string(char *s)
{
int x, y, k;
int c[12] = {32, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125};

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] -= 32;
	}
	for (y = 1; y < x; y++)
	{
		if (s[y] == 9)
		{
			s[y] = 32;
		}

		if (s[y] == 10)
		{
			if (s[y + 1] >= 97 && s[y + 1] <= 122)
			s[y + 1] -= 32;
		}

		for (k = 0; k < 12; k++)
		{
			if (s[y] == c[k])
			if (s[y + 1] >= 97 && s[y + 1] <= 122)
			s[y + 1] -= 32;
		}
	} return (s);
}

/**
*cap_string - function to capitalize a text
*@s: name of the pointer
*Return: pointer that points to the value of s
*/
char *cap_string(char *s)
{
int x, y, k;
int c[11] = {9, 32, 44, 59, 33, 63, 34, 40, 41, 123, 125};

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	if (s[0] >= 97 && s[0] <= 122)
	{
		s[0] -= 32;
	}
	for (y = 0; y < x; y++)
	{
		if (s[y] == 10)
		{
			if (s[y + 1] >= 97 && s[y + 1] <= 122)
			s[y + 1] -= 32;
		}
		else if (s[y] == 46)
		{
			if (s[y + 1] != 32)
			s[y + 1] = 32;
			if (s[y + 2] >= 97 && s[y + 2] <= 122)
			s[y + 2] -= 32;
		}
		for (k = 0; k < 11; k++)
		{
			if (s[y] == c[k] && s[y + 1] != 32)
			s[y + 1] = 32;
		}
	} return (s);
}

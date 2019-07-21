/*cap_string - function to capitalize a text
*@s: name of the pointer
*Return: pointer that points to the value of s
*/
char *cap_string(char *s)
{

int y, k;
int c[12] = {10, 32, 44, 46, 59, 33, 63, 34, 40, 41, 123, 125};

	for (y = 0; s[y] != '\0'; y++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] -= 32;
		}

		else
		{
			for (k = 0; k < 12; k++)
			{
				if (s[y] == c[k] && ((s[y + 1] >= 97 && s[y + 1] <= 122)))
				s[y + 1] -= 32;
			}
		}
	}
return (s);
}

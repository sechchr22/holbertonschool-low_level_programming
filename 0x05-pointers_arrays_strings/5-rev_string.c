
/**
*rev_string - function to reverse a string
*@s: name of the pointer
*Return: always 0
*/
void rev_string(char *s)
{
	int i;
	int x = 8;
	char c;

	for (i = 0; i <= 8; i++)
	{
		if (i == x)
		{
		break;
		}
		else
		{
		c = s[i];
		s[i] = s[x];
		s[x] = c;
		x--;
		}
	}
}

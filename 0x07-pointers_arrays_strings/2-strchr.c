/**
*
*/
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] == c)
		{
			for (y = x; y >= 0; y--)
			{
				s[y-x] = s[y];
			}
	
			s[0] = s[x]
			s[1] = s[x+1]
			hasta la posicion 0 

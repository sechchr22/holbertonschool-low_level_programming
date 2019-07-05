/**
*
*/
char *cap_string(char *s)
{
	int x;
	int y;
	int k;
	int separators[12] = {9, 10, 32, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	x = 0;
	while (s[x] != '\0')
	{
		x++;
	}
	
	for (y = 0; y < x; y++)
	{
		/**
		if ((s[y] == 92) && ((s[y + 1] == 110) || (s[y + 1] == 116)))
		{
			s[y + 2] -= 32;
		}*/
			
		for (k = 0; k <= 12; k++)
		{

			if ((s[y] == 10))
			{
				if(s[y + 1] >= 97 && s[y + 1] <= 122)
				{
					s[y + 1] -= 32;
				}
			}

			else if ( (s[y] == 46) && (s[y + 1] != 32) )
			{
				s[y + 1] = 32;

				if(s[y + 2] >= 97 && s[y + 2] <= 122)
				{
					s[y + 2] -= 32;
				}
			}			

			else ((s[y] = separators[k]) && (s[y + 1] != 32))
			{
				s[y + 1] = 32;
				s[y + 2] -= 32; 
			}	
		}
	}
return (s);
}

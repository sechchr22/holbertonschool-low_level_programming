/**
*
*
*/
int comparission (char *s, int len);

int knowlen(char *s)
{
	
	if (*s != '\0')
	{
		return(1 + knowlen(s + 1));
	}

return(0);
}

/**
*
*
*/

int comparission (char *s, int len)
{

	if(*s != *s(len - 1))
	return (0);	

	if (len % 2 != 0)
	{
		if (len < s)
		return (1);		
	}
	
	else if (len == s)
	return (1);

	s++;

	return (comparission (s, (len - 1));
}

/**
*
*
*/

int is_palindrome(char *s)
{
	int a;

	a = knowlen(s);

	return(comparission(s, a));	
}	



	


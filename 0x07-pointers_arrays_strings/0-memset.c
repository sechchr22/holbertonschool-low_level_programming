/**
*_memset - fills the first n bytes of the memory with the constant byte b
*@s: name of the pointer
*@b: character
*@n: number
*Return: Pointer to the resultant string s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = b;
	}
return (s);
}

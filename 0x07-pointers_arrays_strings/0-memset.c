/**
*memset - function that fills the first n bytes of the memory area pointed to by s with the constant byte b
*@s: name of the pointer 
*@b: character
*@n: number 
*Return: Pointer to the resultant string s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n/**&& s[x] != '\0'*/; x++)
	{
		/** depronto es que 0x00 corresponde a algo que dirige al null y por eso dejando esa condicion en el for se sale apenas ve el primero*/
		/** la solucion seria con un if que anulara esto pero aun no se */
		s[x] = b;
	}
return (s); 
}

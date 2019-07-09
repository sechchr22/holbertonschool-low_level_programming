/**
*_memcpy - that copies memory area
*@dest: name of the first pointer (destiny)
*@src: name of the second pointer (source)
*@n: bytes that will be copied
*Return: Pointer to the value of dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

return (dest);
}

/**
*_strncpy - function to copy a string
*@dest: name of the first pointer
*@src: name of the second pointer
*@n: number that will tell me till what position of src i want to copy
*Return: a pointer that points to the value of
*/
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n && src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}

	for ( ; x < n ; x++)
	{
		dest[x] = '\0';
	}

return (dest);
}

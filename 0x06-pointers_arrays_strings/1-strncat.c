/**
*_strncat - function to concatenate the n string
*@dest: name of the first pointer
*@src: name of the second pointer}
*@n: number that will give the position of the string to copie
*Return: pointer that points to the value of dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int x;
	int j;
	/**to know the lenght of dest*/
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}
	/**to concatenate the n character of the string src into dest*/
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[x + j] = src[j];
	}
	/**adding the null*/
		dest[x + j] = '\0';

return (dest);
}

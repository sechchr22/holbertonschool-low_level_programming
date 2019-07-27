/**
*_strlen_recursion - function that returns the length of a string
*@s: name of the pointer
*Return: lenght if i put a valid string, 0 if not
*/
int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}

return (0);
}

/**
*_isupper - function to check if a character is uppercase
*@c: character to check
*Return: 1 if is an uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

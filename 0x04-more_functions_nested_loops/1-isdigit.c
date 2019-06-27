/**
*_isdigit - function to check if is a digit from 0 to 9
*@c: character to check
*Return: 1 if it is a digit between 0 and 9, 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

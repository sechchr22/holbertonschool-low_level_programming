
/**
*findsquare - function to iterate and find a square of a number
*@a: root to find
*@b: number that i want to find the root
*Return: a if root exist, -1 if not or imaginary
*/

int findsquare(int a, int b)
{
	if (a * a == b)
	{
		return (a);
	}

	else if (a > b || b < 0)
	{
		return (-1);
	}

	a++;
	return (findsquare(a, b));
}

/**
*_sqrt_recursion - function to return the natural root of a number
*@n : number that i want to find the root
*Return: 0 if n = 0, returns of the function findsqare otherwise
*/

int _sqrt_recursion(int n)
{
	int a = 1;

	if (n == 0)
	{
		return (0);
	}

	return (findsquare(a, n));
}


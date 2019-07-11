/**
*
*
*/
int findsquare (int a, int b)
{
	if (a*a == b)
	{
		return (a);
	}

	else
	{
		a++;
	}

	findsquare(a);
}

int _sqrt_recursion(int n)
{
	int a = 1;
	
	if (n == 0)
	{
		return (0);
	}

	else
	{
		findsqare(a, n);
	}
}		

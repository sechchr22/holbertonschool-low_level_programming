/**
*prime - to divide know if a number is prime
*@a: divider
*@b: equal to n (number i want to evaluate)
*Return: 1 if is prime , 0 otherwise
*/
int prime(int a, int b)
{
	int c;

	c = b % a;

	if (a == b)
	{
		return (1);
	}

	if (c == 0 || b <= 1)
	{
		return (0);
	}

	a++;
	return (prime(a, b));
}

/**
*is_prime_number - function to call the iterative procces trough prime
*@n: number to evaluate
*Return: what prime returns
*/
int is_prime_number(int n)
{
	int a = 2;

	return (prime(a, n));
}


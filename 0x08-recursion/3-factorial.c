/**
*factorial - Write a function that returns the factorial of a given number
*@n: integer number
*Return: 1 if n is 0, -1 if is less than 0, factorial value otherwise
*/
int factorial(int n)
{
	if (n == 0)
	return (1);

	else if (n < 0)
	return (-1);

	else
	return (n * factorial(n - 1));
}


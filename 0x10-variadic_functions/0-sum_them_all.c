#include <stdio.h>
#include <stdarg.h>
/**
*sum_them_all - returns the sum of all its parameter
*@n: total of numbers
*Return: the sum of all numbers
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	return (0);

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

return (sum);
}

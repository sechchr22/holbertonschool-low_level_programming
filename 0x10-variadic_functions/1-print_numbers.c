#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: pointer to a string
 * @n: number of integers passed
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, a;

	a = n - 1;
	va_start(ap, n);

	if (separator == NULL)
	separator = "";

	for (i = 0; i < a; i++)
	{
		printf("%d%s", va_arg(ap, int), separator);
	}
		printf("%d\n", va_arg(ap, int));

	va_end(ap);
}

#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Write a function that prints strings, followed by a new line
 * @separator: string to be printed between strings
 * @n: number of strings passed
 * Return: nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, b;
	char *a;

	if (separator == NULL)
	separator = "";

	b = n - 1;
	va_start(ap, n);

	for (i = 0; i < b; i++)
	{
		a = va_arg(ap, char*);

		if (a == NULL)
		a = "(nil)";

		printf("%s%s", a, separator);
	}
		a = va_arg(ap, char*);
		printf("%s\n", a);

	va_end(ap);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function to print all
 * @format: pointer to a string that will tell me the format
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *a;

	if (format == NULL)
	return;

	va_start(ap, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
					printf("%c", va_arg(ap, int));
					break;
			case 'i':
					printf("%i", va_arg(ap, int));
					break;
			case 'f':
					printf("%f", va_arg(ap, double));
					break;
			case 's':
					a = va_arg(ap, char*);
					if (a == NULL)
					{
						a = "(nil)";
					}
					printf("%s", a);
					break;

		}

		while ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
											format[i] == 's') && (format[i + 1] != '\0'))
		{
			printf(", ");
			break;
		} i++;
	}
	printf("\n");
	va_end(ap);
}

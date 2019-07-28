#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
*_strlen - Return the lenght of a string
*@s: name of the pointer
*Return: lenght of the string
*/
unsigned int _strlen(const char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}

	return (len);
}
/**
 * print_all - function to print all
 * @format: pointer to a string that will tell me the format
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i = 0, b;
	char *a;

	if (format == NULL)
	return;
	va_start(ap, format);
	b = (_strlen(format) - 1);
	while (i < _strlen(format))
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
					a = "(nil)";
					printf("%s", a);
					break;

		}

		while ((i < b && format[i] == 'c') || (i < b && format[i] == 'i') ||
											(i < b && format[i] == 'f') || (i < b && format[i] == 's'))
		{
			printf(", ");
			break;
		}
	i++;
	}
	printf("\n");
	va_end(ap);
}

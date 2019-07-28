#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/**
 * check_last - to check the last argument and print it without ", "
 * @c: character to check
 * @ap: is a variable of type va_list and it will store the last
 * argument in my variatic function print_all
 * Return: nothing
*/
void check_last(char c, va_list ap)
{
	char *a;

	switch (c)
	{
		case 'c':
				printf("%c\n", va_arg(ap, int));
				break;
		case 'i':
				printf("%i\n", va_arg(ap, int));
				break;
		case 'f':
				printf("%f\n", va_arg(ap, double));
				break;
		case 's':
				a = va_arg(ap, char*);
				if (a == NULL)
				a = "(nil)";
				printf("%s\n", a);
				break;
	}
	va_end(ap);
}
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

	va_start(ap, format);
	while (i < (strlen(format) - 1))
	{
		switch (format[i])
		{
			case 'c':
					printf("%c, ", va_arg(ap, int));
					break;
			case 'i':
					printf("%i, ", va_arg(ap, int));
					break;
			case 'f':
					printf("%f, ", va_arg(ap, double));
					break;
			case 's':
					a = va_arg(ap, char*);
					if (a == NULL)
					a = "(nil)";
					printf("%s, ", a);
					break;
		}
	i++;
	}
	check_last(format[i], ap);
	va_end(ap);
}

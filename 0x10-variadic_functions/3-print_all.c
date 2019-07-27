#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/*
 *
 * print_all - function to print "all"
 * @format: pointer that will recieve valid formats and not
 * valid formats represented as chars in a string
 * Return: nothing
*/
void print_all(const char * const format, ...)
{
	va_list ap;

	format_t array[] = {
	{'c', "%c, ", "%c\n"},
	{'i', "%i, ", "%i\n"},
	{'f', "%f, ", "%f\n"},
	{'s', "%s, ", "%s\n"},
	{'0', NULL, NULL}
	};

	int i; /*para recorrer el string que llega a *format*/
	int j; /*para recorrer la estructura*/
	int len; /*guardar el largo del string que llega a *format*/
	char *a; /*para guardar el formatspecifier*/
	char *b; /*para guardar el formatspecifier_2*/
	char *c; /*para guardar va_arg char*/

	len = strlen(format);

	i = 0;
	j = 0;

	va_start(ap, format);

	while (i < len)
	{
		while (array[j].character != '0')
		{
			if (format[i] == array[j].character)
			{
				a = array[j].fs;
				b = array[j].fs_2;
			
				if (format[i] == 's' && c == NULL)
 				{
					c = va_arg(ap, char*);
					c = "(nil)";
					printf("%s", c);
					j = 0;
					break;
 				} 

				if ((i + 1) == len)
				{
					printf(b, va_arg(ap, int));
					return;
				}

				printf(a, va_arg(ap, int));
				j = 0;
				break;
			}
		j++;
		}
	j = 0;
	i++;
	}
	va_end(ap);
}

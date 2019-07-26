#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
/*
*
*/
void print_all(const char * const format, ...)
{
	va_list ap;

	format_t array[] = {
	{'c', "%c, ", "%c\n", "va_arg(ap, char)"},
	{'i', "%i, ", "%i\n", "va_arg(ap, int)"},
	{'f', "%f, ", "%f\n", "va_arg(ap, float)"},
	{'s', "%s, ", "%s\n", "va_arg(ap, char*)"},
	{'0', NULL, NULL, NULL}
	};

	int i; /*para recorrer el string que llega a *format*/
	int j; /*para recorrer la estructura*/
	int len; /*guardar el largo del string que llega a *format*/
	char *a; /*para guardar el formatspecifier*/
	char *b; /*para guardar el formatspecifier_2*/
	char *c; /*para guardar el argumento*/

	len = strlen(format);
	
	i = 0;
	j = 0;
	
	va_start(ap, format);	

	while (i < len)
	{
		while (array[j].cha != '0')
		{
			if (format[i] == array[j].cha)
			{
				a = array[j].fs;
			
				b = array[j].fs_2;

				c = array[j].type;
				
				if ( (i + 1) == len)
				printf(b, c);
				
				printf(a, c);
			}
		j++;
		}		
	i++;
	}
	va_end(ap);
}		

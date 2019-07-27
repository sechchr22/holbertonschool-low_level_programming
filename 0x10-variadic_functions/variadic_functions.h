#ifndef HEADER_FILE
#define HEADER_FILE
#include "variadic_functions.h"

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct format - My menuxy
 * @character: character to identify the type
 * @fs: pointer to format specifier as string
 * @fs_2: pointer to format specifier as string
 * but at the end
*/

typedef struct format
{
	char character;
	char *fs;
	char *fs_2;
} format_t;

#endif

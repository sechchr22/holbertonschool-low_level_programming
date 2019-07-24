#include <stdio.h>
/**
 * print_name - function to invoke another function
 * @name: pointer to a char string
 * @f: pointer to a function that takes a char pointer
 * and return nothing
 * return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name == NULL || f == NULL)
	return;

	f(name);
}

#include "holberton.h"
/**
*print_alphabet - function that prints the lowercase alphabet
*_putchar: to print
*Return: Always 0 (Success)
*Using betty style
*/
void print_alphabet(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}



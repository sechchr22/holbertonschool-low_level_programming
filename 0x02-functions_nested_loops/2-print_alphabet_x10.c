#include "holberton.h"
/**
*print_alphabet_x10 - function to print lowercase alphabet 10 times
*_putchar - to print
*/
void print_alphabet_x10(void)
{
int j;
char x;
for (j = 0; j <= 9; j++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}


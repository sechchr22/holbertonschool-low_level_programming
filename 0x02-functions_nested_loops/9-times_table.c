#include "holberton.h"
/**
 *times_table - Write a function that prints the 9 times table, starting with 0
 *return: 0
 */
void times_table(void)
{
int i = 0;
int j = 0;
int x = 0;
while (i <= 9)
{
j = 0;
while (j < 10)
{
x = (0 + j)*i;
if (j == 0)
{
_putchar(x + '0');
}
if (x > 9)
{
_putchar(',');
_putchar(' ');
_putchar(x/10 + '0');
_putchar(x%10 + '0');
}
else
if (x <= 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar(x + '0');
}
else
{
_putchar(x);
}
j++;
}
_putchar('\n');
i++;
}
}

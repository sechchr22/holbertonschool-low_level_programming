#include "holberton.h"
/**
 *print_last_digit - function to print the last digit of a number
 *@n: number
 *Return: the absolute value of last digit of the number
 */
int print_last_digit(int n)
{
int m;
int x;
m = n % 10;
if (m < 0)
{
x = m*(-1);
_putchar(x + '0');
return (x);
}
else
{
_putchar(m + '0');
return (m);
}
}



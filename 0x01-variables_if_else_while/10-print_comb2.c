#include <stdio.h>
/**
 *main - Entry point
 *for - makes the loop till the condition become false
 *if and else - to make another loop
 *x: variable that will hold our integer number
 *putchar - to print
 *Return: Always 0 (Success)
 *Using betty style
 */
int main(void)
{
int x;
int j;
for (j = 48; j <= 57; j++)
{
for (x = 48; x <= 57; x++)
{
putchar (j);
putchar (x);
if (x >= 48 && x <= 57)
{
putchar (',');
putchar (' ');
}
}
}
putchar ('\n');
return (0);
}

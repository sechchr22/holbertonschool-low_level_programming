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
for (x = '0'; x <= '9'; x++)
{
if (x == '0' && x == '9')
{
putchar (x);
}
else
{
putchar (x);
putchar (',');
}
}
putchar ('\n');
return (0);
}

#include <stdio.h>
/**
*main - Entry point
*for - makes the loop till the condition become false
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
putchar (x);
}
putchar ('\n');
return (0);
}

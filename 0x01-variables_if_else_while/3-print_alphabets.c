#include <stdio.h>
/**
*main - Entry point
*for - makes the loop till the condition become false
*putchar - to print
*Return: Always 0 (Success)
*Using betty style
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
putchar (x);
}
for (x = 'A'; x <= 'Z'; x++)
{
putchar (x);
}
putchar ('\n');
return (0);
}

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
for (x = 'z'; x >= 'a'; x--)
{
putchar (x);
}
putchar ('\n');
return (0);
}

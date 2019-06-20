#include <stdio.h>
/**
*main - Entry point
*for - makes the loop till the condition become false
*while - is making a loop inside the first one
*putchar - to print
*Return: Always 0 (Success)
*Using betty style
*/
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x != 'e' && x != 'q')
{
putchar (x);
}
}
putchar ('\n');
return (0);
}

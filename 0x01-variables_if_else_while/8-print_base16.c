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
int x;
char j;
for (x = '0'; x <= '9'; x++)
{
putchar (x);
}
for (j = 'a' ; j <= 'f'; j++)
{
putchar (j);
}
putchar ('\n');
return (0);
}

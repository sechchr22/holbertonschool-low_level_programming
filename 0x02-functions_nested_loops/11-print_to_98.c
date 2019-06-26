#include "stdio.h"
/**
*print_to_98 - printing till 98
*@n: number to start printing
*Return: 0
*/
void print_to_98(int n)
{
int x;
if (n > 98)
{
for (x = n; x >= 98; x--)
{
if (x == 98)
{
printf("%d",x);
break;
}
printf("%d, ",x);
}
printf("\n");
}
else if (n < 98)
{
for (x = n; x <= 98; x++)
{
if (x == 98)
{
printf("%d",x);
break;
}
printf("%d, ",x);
}
printf("\n");
}
else
{
printf("%d",n);
printf("\n");
}
}




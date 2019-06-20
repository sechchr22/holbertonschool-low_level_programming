#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*if (n > 5) to check if the number is greater than 5
*else to set another function if the first one is not truth
*if (n == 0) to check if the number is equal to 0
*if (n < 6) to check if the number is less than 6
*printf a message in each case
*%d format specifier
*op_% - output the coscient of the division
*n - random number
*lastdigit - lasdigit of the number n
*Return: Always 0 (Success)
*Using betty style
*/
int main(void)
{
int n;
int lastdigit;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastdigit = n % 10;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, lastdigit);
}
else
if (n == 0)
{
printf("Last digit of %d is %d and is 0", n, lastdigit);
}
else
if (n < 6)
{
printf("Last digit of %d n is %d and is less than 6 and not 0", n, lastdigit);
}
return (0);
}

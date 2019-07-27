
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*if (n>0) to check if the number is positive
*printf to print "is positive"
*if (n<0) to check if the number is negative
*printf to print "is negative"
*otherwise printf to print "is zero"
*n: random number to be checked
*Return: Always 0 (Success)
*using betty style
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else
if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}
return (0);
}

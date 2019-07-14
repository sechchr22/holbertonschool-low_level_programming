
/**
 *_abs - gives the absolute value of a number
 *Return: x if x is either positive or negative, 0 if x = 0
 *@n: value to check
 */
int _abs(int n)
{
int x;
if (n < 0)
{
x = n * (-1);
return (x);
}
else if (n == 0)
{
return (0);
}
else
{
return (n);
}
}

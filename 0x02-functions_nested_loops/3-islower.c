#include "holberton.h"
/**
* _islower - Function to check  if i have a lowercase character
* @c: character to check
* Return: 1 if c is a lowecase, 0 if c is an upercase
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
if (c >= 65 && c <= 90)
{
return (0);
}
return (0);
}

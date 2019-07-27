#include <stdio.h>
/**
*main - check the code for Holberton School students.
*Return: Always 0
*/
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3 == 0) && (x % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (x % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (x % 5 == 0)
		{
			if (x == 100)
			{
				printf("Buzz");
				printf("\n");
			}
			else if (x < 100)
			{
				printf("Buzz ");
			}
			else
			{
				continue;
			}
		}
		else
		{
			printf("%d ", x);
		}
	}
return (0);
}

#include <stdio.h>
/**
*main - check the code for Holberton School students.
*Return: Always 0
*/
void fizz_buzz(void);

int main(void)
{
	fizz_buzz();
	return (0);
}

/**
*fizz_buzz - Function to print 1-100, including Fizz, Buzz, FizzBuzz
*Return: Always 0
*/

void fizz_buzz(void)
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
			printf("Buzz ");
			if (x == 100)
			{
				printf("\n");
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
}

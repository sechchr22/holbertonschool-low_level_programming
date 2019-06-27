#include <stdio.h>
/**
*main - check the code for Holberton School students.
*fizzbuzz - Function to print 1-100, including Fizz and Buzz
*Return: Always 0
*/
void fizzbuzz(void);

int main(void)
{
	fizzbuzz();
	return (0);
}

void fizzbuzz(void)
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

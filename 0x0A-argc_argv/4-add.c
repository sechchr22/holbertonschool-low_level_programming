#include <stdio.h>
#include <stdlib.h>
/**
*main - function to add positive numbers
*@argc: number of command line arguments
*@argv: array of character listing all the arguments
*Return: always 0, succes
*/
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(argv[i][0] >= 48 && argv[i][0] <= 57))
		{
			printf("Error\n");
			return (0);
		}

		else
		{
			if (atoi(argv[i]) < 0)
			{
				printf("Error\n");
				return (0);
			}

			else
			sum = sum + atoi(argv[i]);
		}
	}

	printf("%d\n", sum);

return (0);
}

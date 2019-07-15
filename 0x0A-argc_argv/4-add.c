#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
*main - function to add positive numbers
*@argc: number of command line arguments
*@argv: array of character listing all the arguments
*Return: always 0, succes
*/
int main(int argc, char **argv)
{
	int i;
	int j;
	int sum = 0;
	int n;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			n = isdigit(argv[i][j]);

			if (n == 0)
			{
				printf("Error\n");
				return (0);
			}

		}

		sum = sum + atoi(argv[i]);
	}

printf("%d\n", sum);
return (0);
}

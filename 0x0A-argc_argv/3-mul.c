#include <stdio.h>
#include <stdlib.h>
/**
*main - function to multiplie 2 numbers ingresed as arguments
*@argc: number of command line arguments
*@argv: array of character listing all the arguments
*Return: always 0, success
*/
int main(int argc, char **argv)
{
	int mult;
	int a;
	int b;

	if (argc == 1)
	{
		printf("Error\n");
		return (1);
	}

	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		mult = a * b;
		printf("%d\n", mult);
	}

return (0);
}

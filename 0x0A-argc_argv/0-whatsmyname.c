#include <stdio.h>
/**
*main - my main function to print program name
*@argc: number of command line arguments
*@argv: array of character listing all the arguments
*Return: always 0
*/

int main(int argc, char **argv)
{
	(void) argc;

	printf("%s\n", argv[0]);

	return (0);
}

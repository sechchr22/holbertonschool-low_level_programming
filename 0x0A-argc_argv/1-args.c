#include <stdio.h>
/**
*main - main function to print number of command lines (arguments)
*@argc: number of command line arguments
*@argv: array of character listing all the arguments
*Return: always 0, success
*/
int main(int argc, char **argv)
{
	(void) argv;

	printf("%d\n", (argc - 1));

	return (0);
}

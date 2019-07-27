#include <stdio.h>
/**
*main - function to print all the arguments including the name of the program
*@argc: number of command line arguments
*@argv: array of character listing all the arguments
*Return: always 0, success
*/
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

return (0);
}

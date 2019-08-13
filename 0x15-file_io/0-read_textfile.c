#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include "holberton.h"
#include <stdlib.h>
/**
 * read_textfile - function that reads a text file and prints it
 * o the POSIX standard output
 * @filename: pointer that holds the adress of the file
 * @letters: quantity of letters that the file has
 * Return: number of characters it should read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int sz, sz2, fd1;
	char *c;

	if ((filename == NULL) | (letters == 0))
	return (0);

	c = (char *) malloc(letters * sizeof(char));

	if (c == NULL)
	return (0);

	fd1 = open(filename, O_RDONLY);

	sz = read(fd1, c, letters);
	if (sz == (-1))
	{	free(c);
		close(fd1);
		return (0);
	}

	close(fd1);

	sz2 = write(STDOUT_FILENO, c, sz);
	if (sz2 == (-1))
	{
		free(c);
		return (0);
	}

	free(c);
	return (sz2);
}

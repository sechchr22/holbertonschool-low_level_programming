#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		/*write(STDERR_FILENO, "Usage: cp file_from file_to", 28);*/
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	if (av[1] == NULL)
	exit(98);
	
	copy(av[1], av[2]);

	return (0);
	
}
void copy (const char *file_from, char *file_to)  /* esta debe ser recursiva*/
{
	int fd, num, fd2;
	char buf[1024];

	fd = open(file_from, O_RDONLY);

	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664); 

	num = read(fd, buf, 1024);
	num = write(fd2, buf, num);

	while (num == 1024)
	{
		num = write(fd2, buf, num);
	}

	close(fd);
	close(fd2);
}

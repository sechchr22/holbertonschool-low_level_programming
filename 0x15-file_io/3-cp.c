#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * main - main function
 * @ac: number of arguments passed
 * @av: pointer to argument
 * Return: 0, success
*/
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}

	copy(av[1], av[2]);

	return (0);

}
/**
 * copy - function to copy from a file to another
 * @file_from: pointer that will recieve name of file_from
 * @file_to: pointer that will recieve name of file_to
 * Return: nothing, success
*/
void copy(const char *file_from, char *file_to)
{
	int fd, num, fd2, close_value, close_value2;
	char buf[1024];

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	error_98(file_from);

	fd2 = open(file_to, O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	error_99(file_to);

	num = read(fd, buf, 1024);
	if (num == -1)
	error_98(file_from);

	num = write(fd2, buf, num);
	if (num == -1)
	error_99(file_to);

	while (num == 1024)
	num = write(fd2, buf, num);

	close_value = close(fd);
	if (close_value == -1)
	error_100(fd);

	close_value2 = close(fd2);
	if (close_value2 == -1)
	error_100(fd2);
}
/**
 * error_98 - function for error98
 * @a: pointer that whill recieve name of file_from
 * Return: nothing
*/
void error_98(const char *a)
{
	exit(98);
	dprintf(STDOUT_FILENO, "Error: Can't read from file %s", a);
}
/**
 * error_99 - function for error99
 * @a: pointer that whill recieve name of file_from
 * Return: nothing
*/
void error_99(char *a)
{
	exit(99);
	dprintf(STDOUT_FILENO, "Error: Can't write to  %s", a);
}
/**
 * error_100 - function for error100
 * @a: int that whill recieve a file descriptor
 * Return: nothing
*/
void error_100(int a)
{
	exit(100);
	dprintf(STDOUT_FILENO, "Error: Can't close fd %d", a);
}

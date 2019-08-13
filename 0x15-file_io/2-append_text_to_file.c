#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include "holberton.h"
/**
*_strlen - Return the lenght of a string
*@s: name of the pointer
*Return: lenght of the string
*/
int _strlen(char *s)
{
	int len = 0;

	while (*s != 0)
	{
		s++;
		len++;
	}

	return (len);
}
/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to file
 * @text_content: pointer to content
 * Return: 1 succes -1 otherwise
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = 0, sz = 0;

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL && fd != -1)
	{
		close(fd);
		return (1);
	}
	else if (fd == -1)
	return (-1);

	sz = write(fd, text_content, _strlen(text_content));
	if (sz == -1)
	return (-1);

return (1);
}

#include <unistd.h>
#include "holberton.h"
#include <fcntl.h>
#include <stdio.h>
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
 * create_file - function that creates a file.
 * @filename: pointer that will recieve the filename
 * as an argument
 * @text_content: content of the file
 * Return: 1 if it success and -1 if not
*/
int create_file(const char *filename, char *text_content)
{
	int fd, sz;

	/*a = _strlen(text_content);*/

	if (filename == NULL)
	return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == (-1))
	return (-1);

	if (text_content != NULL)
	{
		sz = write(fd, text_content, _strlen(text_content));
		if (sz == (-1))
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

return (1);
}

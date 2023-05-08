#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: name of created file
 * @text_content: content of created file
 * Return: 1 on success. -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t fd, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (; text_content[count]; count++)
			;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (write(fd, text_content, count) == -1)
		return (-1);

	close(fd);

	return (1);
}

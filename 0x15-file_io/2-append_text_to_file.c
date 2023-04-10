#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - appends content to a file
 * @filename: name of file to append
 * @text_content: content to be appended to file
 * Return: 1 on success. -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, count = 0;

	if (filename == NULL)
		return (-1);

	if (text_content)
	{
		for (; text_content[count]; count++)
			;
	}
	else
	{
		return (1);
	}

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	wr = write(fd, text_content, count);
	if (wr == -1)
		return (-1);

	close(fd);

	return (1);
}

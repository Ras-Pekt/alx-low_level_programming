#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

#define BUFFER 1024

/**
 * check_argc - checks argument count
 * @argc: argument count
 * Return: void
 */
void check_argc(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * safe_close - safely closes file descriptor
 * @fd: file descriptor
 * @b: buffer variable
 * Return: void
 */
void safe_close(int fd, char *b)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		free(b);
		exit(100);
	}
}
/**
 * main - copy file from src to dest
 * @ac: argument count
 * @av: argument array
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	char *buff;
	int fd_file_from, fd_file_to, rd, wr;

	check_argc(ac);

	buff = malloc(sizeof(char) * BUFFER);

	fd_file_from = open(av[1], O_RDONLY);
	rd = read(fd_file_from, buff, BUFFER);

	if (fd_file_from == -1 || rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		free(buff);
		exit(98);
	}

	fd_file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664); /* O_WRONLY */
	wr = write(fd_file_to, buff, rd);

	if (fd_file_to == -1 || wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		free(buff);
		exit(99);
	}

	while (rd > 0)
	{
		fd_file_to = open(av[2], O_WRONLY | O_APPEND); /* O_WRONLY */
		rd = read(fd_file_from, buff, BUFFER);
		wr = write(fd_file_to, buff, rd);
	}

	safe_close(fd_file_from, buff);
	safe_close(fd_file_to, buff);

	free(buff);
	exit(EXIT_SUCCESS);
}

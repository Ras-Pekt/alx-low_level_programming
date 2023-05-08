#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

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
 * Return: void
 */
void safe_close(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
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
	char buff[1024];
	int fd_file_from, fd_file_to, rd, wr;

	check_argc(ac);

	fd_file_from = open(av[1], O_RDONLY);
	if (fd_file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	rd = read(fd_file_from, buff, 1024);
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	fd_file_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (rd != -1)
	{
		wr = write(fd_file_to, buff, rd);
		if (fd_file_to == -1 || wr != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			safe_close(fd_file_from);
			exit(99);
		}
	}

	safe_close(fd_file_from);
	safe_close(fd_file_to);
	exit(EXIT_SUCCESS);
}

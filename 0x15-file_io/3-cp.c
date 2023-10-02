#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - copies the contents of a file onto another file
 * @argc: number of arguments
 * @argv: the list of the actual aguments
 * Return: always o
 */
int main(int argc, char *argv[])
{
	int fd_a, fd_b, a, b;
	char buff[1024];
	ssize_t bytes_read, bytes_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_a = open(argv[1], O_RDONLY);
	if (fd_a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	while ((bytes_read = read(fd_a, buff, 1024)) > 0)
	{
		bytes_write = write(fd_b, buff, bytes_read);
		if (bytes_write < 0 || write(fd_b, buff, bytes_write) != bytes_write)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_a);
			exit(99);
		}
	}
	a = close(fd_a);
	b = close(fd_b);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd_a);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd_b);
		exit(100);
	}
	return (0);
}

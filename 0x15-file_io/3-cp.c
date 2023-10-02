#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * main - copies the contents of a file onto another file
 * @argc: number of arguments
 * @argv: the list of the actual aguments
 */
int main(int argc, char *argv[])
{
	int fd_a, fd_b;
	char *buff;
	ssize_t bytes_read, bytes_write;

	buff = malloc(1024);
	if (buff == NULL)
		return (-1);
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_a = open(argv[1], O_RDONLY);
	if (fd_a == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_b = open(argv[2], O_CREAT | O_WRONLY, 00664);
	ftruncate(fd_b, 1024);
	while ((bytes_read = read(fd_a, buff, 1024)) > 0)
	{
		bytes_write = write(fd_b, buff, bytes_read);
		if (bytes_write == 0 || fd_b == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	free(buff);
	close(fd_a);
	close(fd_b);
	if (!close(fd_a))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd_a);
		exit(100);
	}
	if (!close(fd_b))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", fd_b);
		exit(100);
	}
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
/**
 * create_buffer - allocates 1024 bytes buffer
 * @file: name of the file that will use the buffer
 * Return: a pointer to a newly located buffer
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);
	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_file - closes file and handle errors
 * @fd: file discripter
 * Return: nothing
 */
void close_file(int fd)
{
	int a;

	a = close(fd);
	if (a < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - copies the contents of a file onto another file
 * @argc: number of arguments
 * @argv: the list of the actual aguments
 * Return: always o
 */
int main(int argc, char *argv[])
{
	int fd_a, fd_b;
	char *buff;
	ssize_t read_count, write_count;

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

	buff = create_buffer(argv[2]);
	fd_b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);
	read_count = read(fd_a, buff, 1024);
	while (read_count > 0)
	{
		write_count = write(fd_b, buff, read_count);
		if (write_count < 0 || fd_b < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_a);
			exit(99);
		}
		if (write_count >= read_count)
			break;
	}
	close_file(fd_a);
	close_file(fd_b);
	return (0);
}

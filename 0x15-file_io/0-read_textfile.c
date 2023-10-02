#include "main.h"
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <stddef.h>
/**
 * read_textfile - reads a text file and print it to stdout
 * @filename: apointer to the file we would like to read
 * @letters: the number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, read_count, write_count;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	read_count = read(fd, buffer, letters);
	write_count = write(1, buffer, sizeof(letters));
	if (read_count == -1)
		return (0);
	free(buffer);
	close(fd);
	return (write_count);
}

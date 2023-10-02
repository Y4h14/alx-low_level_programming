#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
/**
 * create_file - creates a function
 * @filename: the name of the file to be created
 * @text_content: a NULL terminated string
 * Return: 1 on success and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, write_count;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		write_count = write(fd, text_content, strlen(text_content));
		if (write_count < 0)
			return (-1);
	}
	close(fd);
	return (1);
}

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
	int fd, i, w;
	char *buff;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY, 00600);
	if (!fd)
		return (-1);

	if (text_content != NULL)
	{
		buff = malloc(1024);
		if (buff == NULL)
			return (-1);
		for (i = 0; i < (int)strlen(text_content); i++)
			buff[i] = text_content[i];
		w = write(fd, buff, strlen(text_content));
		if (w < 0)
			return (w);
	}
	free(buff);
	close(fd);
	return (1);
}

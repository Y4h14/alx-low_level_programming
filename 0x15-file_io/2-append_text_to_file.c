#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: a null terminated string
 * Return: 1 on success -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i, w;
	char *buff;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!fd)
		return (-1);

	if (text_content == NULL)
		return (1);

	buff = malloc(1024);
	if (buff == NULL)
		return (-1);

	for (i = 0; i < (int)strlen(text_content); i++)
		buff[i] = text_content[i];
	w = write(fd, buff, strlen(text_content));
	if (w < 0)
		return (w);
	free(buff);
	close(fd);
	return (1);
}

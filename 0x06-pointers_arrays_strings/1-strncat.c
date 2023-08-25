#include "main.h"
/**
 * _strncat - concat a string at index n
 * @dest: a string of char
 * @src: a string of chat
 * @n: an intiger index
 * 
 * Return: a string of char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);

}
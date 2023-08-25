#include "main.h"
/**
 * _strcat - concatinate two strings 
 * @dest: a string of char
 * @src: a string of char
 * 
 * Return: the concatenated char
 */

char *_strcat(char *dest, char *src)
{
char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s); 
}
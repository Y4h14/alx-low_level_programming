#include "main.h"
/**
 * _strlen - length of a string
 * @s: a string
 * Return: an intiger count of the string
 */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
	i++;
}
return (i);
}

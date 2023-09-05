#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to newly allocated memory
 * @str: a sting of charecters
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
char *new;
unsigned int i, len;
if (str == NULL)
	return (NULL);
len = sizeof(str) / sizeof(str[i]);
new = malloc(len *sizeof(char));
if (new == NULL)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
	new[i] = str[i];

if (new == NULL)
	return (NULL);
return (new);
}

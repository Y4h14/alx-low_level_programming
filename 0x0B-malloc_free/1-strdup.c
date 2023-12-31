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
unsigned int i;
int len = 0;
if (str == NULL)
	return (NULL);

while (str[len] != '\0')
	len++;
new = malloc((len * sizeof(char)) + 1);
if (new == NULL)
	return (NULL);
for (i = 0; str[i] != '\0'; i++)
	new[i] = str[i];

if (new == NULL)
	return (NULL);
return (new);
}

#include "main.h"
#include <stdlib.h>

/**
 * strtow - splits a string into words
 * @str: string
 * Return: NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
int i, len = 0;
int j = 0;
char *tow;

if (str == NULL | str == "")
	return (NULL);
while (str[len] != '\0')
	len++;

tow = malloc(len * sizeof(char));

for (i = 0; str[i] != '\0'; i++)
{
	if (str[i] == " ")
		continue;
	tow[j] = str[i];
	i++;
}

return (tow);
}

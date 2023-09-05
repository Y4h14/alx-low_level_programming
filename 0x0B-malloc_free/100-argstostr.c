#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatinates all arguments of a program
 * @ac: int
 * @av: string
 * Return: a string or null if failed
 */
char *argstostr(int ac, char **av)
{
int i;
if (ac == 0 | av == NULL)
	return (NULL);

char *str = malloc(ac * sizeof(char));
if (str == NULL)
	return (NULL);

for (i = 1; av[i] != '/0'; i++)
	str[i - 1] = av[i];

return (str);
}

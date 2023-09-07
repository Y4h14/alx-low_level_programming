#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatinates two strings
 * @s1: a string
 * @s2: a string
 * @n: an intiger
 * Return: pointer to the result or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int lens1 = 0, lens2 = 0;
int i, j;
char *cat;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[lens1] != '\0')
	lens1++;
while (s2[lens2] != '\0')
	lens2++;
cat = malloc((lens1 + lens2) * sizeof(char));
if (cat == NULL)
	return (NULL);
for (i = 0; i < lens1; i++)
	cat[i] = s1[i];
if (n >= (unsigned int)lens2)
{
	for (j = 0; j <= lens2; j++)
	{
		cat[i] = s2[j];
		i++;
	}
}
else
{
	for (j = 0; (unsigned int)j <= n; j++)
	{
		cat[i] = s2[j];
		i++;
	}
}

return (cat);
}

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
int i, j, r;
char *cat;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[lens1] != '\0')
	lens1++;
while (s2[lens2] != '\0')
	lens2++;
if (n >= (unsigned int)lens2)
{
	cat = malloc((lens1 + lens2 + 1) * sizeof(char));
	r  = lens2;
}
else
{
	cat = malloc((lens1 + n + 1) * sizeof(char));
	r = n ;
}
if (cat == NULL)
	return (NULL);

for (i = 0; i < lens1; i++)
	cat[i] = s1[i];
for (j = 0; j < r; j++)
{
	cat[i] = s2[j];
	i++;
}


return (cat);
}

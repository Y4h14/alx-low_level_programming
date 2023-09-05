#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatinates two strings
 * @s1: a string
 * @s2: a string
 * Return: pointer to a newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
char *cat;
unsigned int i, j;
int max, len1, len2;
len1 = 0;
len2 = 1;

if (s1 == NULL)
	s1[0] = '\0';
while (s1[len1] != '\0')
	len1++;

if (s2 == NULL)
	s2[0] = '\0';
while (s2[len2] != '\0')
	len2++;

max = len1 + len2 + 2;
cat = malloc(max *sizeof(char));
if (cat == NULL)
	return (NULL);

for (i = 0; s1[i] != '\0'; i++)
	cat[i] = s1[i];

for (j = 0; s2[j] != '\0'; j++)
{
	cat[i] = s2[j];
	i++;
}

cat[i] = '\0';
return (cat);
}

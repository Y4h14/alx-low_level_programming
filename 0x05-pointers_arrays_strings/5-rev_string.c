#include "main.h"
/**
 * rev_string - reverses a string
 * @s: a string
 * Return: nothing
 */

void rev_string(char *s)
{
int i, j, n = 0;
char rev;
while (s[n] != '\0')
{
	n++;
}
j = n - 1;
for (i = 0; j >= 0 && i <= j; j--, i++)
{
	rev = s[j];
	s[j] = s[i];
	s[i] = rev;
}
}

#include "main.h"
/**
 * leet - encodes a string
 * @s: a string
 *
 * Return: an encoded string
 */

char *leet(char *s)
{
int i = 0;
while (s[i] != '\0')
{
	if (s[i] == 'a' || s[i] == 'a')
	{
		s[i] = '4';
	}
	else if (s[i] == 'e' || s[i] == 'E')
	{
		s[i] = '3';
	}
	else if (s[i] == 'o' || s[i] == 'O')
	{
		s[i] = '0';
	}
	else if (s[i] == 't' || s[i] == 'T')
	{
		s[i] = '7';
	}
	else if (s[i] == 'l' || s[i] == 'L')
	{
		s[i] = '1';
	}
i++;
}
return (s);
}

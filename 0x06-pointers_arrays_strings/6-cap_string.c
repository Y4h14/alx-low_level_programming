#include "main.h"
/**
 * cap_string - capitalize all words
 * @s: a string
 * Return: the capitalized string
 */
char *cap_string(char *s)
{
int i;
char a[] = " \t\n,;.!?\"(){}";
for (i = 0; s[i] != '\0' ; i++)
{
	if (s[i] >= a[0] && s[i] <= a[0])
	{
		if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
		{
			s[i + 1] -= 32;
		}
	}
}
return (s);
}

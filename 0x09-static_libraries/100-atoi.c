#include "main.h"
/**
 * _atoi - turn a string into int
 * @s: a sting
 *
 * Return: an int number
 */

int _atoi(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
	if (s[i] < 58 && s[i] > 47)
	{
		_putchar(s[i]);
	}

}
return (0);
}

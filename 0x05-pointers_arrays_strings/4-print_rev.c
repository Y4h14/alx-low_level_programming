#include "main.h"
/**
 * print_rev - reverse a string
 * @s: a string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
int i, n = 0;
while (s[n] != '\0')
{
	n++;
}
for (i = n - 1 ; i >= 0; i--)
{
	_putchar(s[i]);
}
_putchar('\n');
}

#include "main.h"
/**
 * _puts - replicate the put fucntion
 * @str: a string
 *
 * Return: nothing
 */

void _puts(char *str)
{
int i = 0;
while (str[i] != '\0')
{
	_putchar(str[i]);
	i++;
}
_putchar('\n');
}

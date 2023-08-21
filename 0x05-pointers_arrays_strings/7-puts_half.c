#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: a string
 * Return: nothing
 */
void puts_half(char *str)
{
int len, j = 0;
while (str[len] != '\0')
{
	len++;
}
if ((len + 1) % 2 != '0')
{
	j = (len - 1) / 2;
}
else
{
	j = len / 2;
}
j++;
for (len = j; str[len] != '\0'; len++)
{
	_putchar(str[len]);
}
_putchar('\n');
}

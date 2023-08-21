#include "main.h"
/**
 * puts_half - print the second half of a string
 * @str: a string
 * Return: nothing
 */
void puts_half(char *str)
{
int i, j = 0, k;
while (str[i] != '\0')
{
	i++;
}
if (i % 2 != 0)
{
	j = (i - 1) / 2;
}
else
{
	j = i / 2;
}
for (k = j; str[k] != '\0'; k++)
{
	_putchar(str[k]);
}
_putchar('\n');
}

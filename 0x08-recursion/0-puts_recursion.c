#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: pointer to a string
 * Returns: nothing
 */

void _puts_recursion(char *s)
{
_putchar(*s);
s++;
if (*s != '\0')

	_puts_recursion(s);

else
	_putchar('\n');

}

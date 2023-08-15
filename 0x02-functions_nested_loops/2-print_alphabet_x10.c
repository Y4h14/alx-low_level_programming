#include "main.h"

/**
 * print_alphabet_x10 - Entrey point
 *
 */

void print_alphabet_x10(void)
{
char chr;
int i = 0;
while (i < 10)
{
	for (chr = 'a'; chr <= 'z'; chr++)
	{
		_putchar(chr);
	}
	_putchar('\n');
	i++;
}


}

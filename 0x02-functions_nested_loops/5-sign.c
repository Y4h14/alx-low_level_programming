#include "main.h"

/**
 * print_sign - Entry point
 * @n: an intiger
 *
 * Return: 1 if the number is positve
 */

int print_sign(int n)
{
if (n == 0)
{
	_putchar('0');
	return (0);
}
else if (n > 0)
{
	_putchar('+');
	return (1);
}
else
{
	_putchar('-');
	return (-1);
}
}

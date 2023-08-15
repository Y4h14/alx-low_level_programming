#include "main.h"

/**
 * print_last_digit -Entry point
 *@x: and intiger
 *
 * Return: the last digit
 */

int print_last_digit(int x)
{
int y = _putchar((x % 10) + '0');
return (y);
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: a string seperating numbers
 * @n: int number of arguments
 * Return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;

if (n == 0)
	return;
va_start(args, n);
if (separator == NULL)
	separator = "";
for (i = 0; i < n; i++)
{
	printf("%d", va_arg(args, int));
	if (i < n - 1)
	printf("%s", separator);
}
va_end(args);
printf("\n");
}

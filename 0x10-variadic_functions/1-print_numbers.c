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

va_start(args, n);
if (separator != NULL && n != 0)
{
	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(args, int), separator);
	printf("%d\n", va_arg(args, int));
}
va_end(args);

}

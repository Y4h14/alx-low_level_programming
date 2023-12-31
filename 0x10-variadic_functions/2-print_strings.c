#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: a string
 * @n: number of arguments
 * Return's nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
char *c;

va_start(args, n);
for (i = 0; i < n; i++)
{
	c = va_arg(args, char *);
	if (c == NULL)
		printf("(nil)");
	else
		printf("%s", c);
	if (separator == NULL)
		separator = "";
	if (i < n - 1)
		printf("%s", separator);

}

va_end(args);
printf("\n");
}

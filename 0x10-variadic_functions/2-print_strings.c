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
c = va_arg(args, char *);
for (i = 0; i < n - 1; i++)
{
	if (c == NULL)
		printf("(nil)");
	else
		printf("%s", c);
	if (separator == NULL)
		separator = "";
	printf("%s", separator);
	c = va_arg(args, char *);
}
printf("%s", c);

va_end(args);
printf("\n");
}

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
va_list list;
int i = 0;
char *sep = "", *str;

va_start(list, format);
if (format != NULL)
{
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(list, int));
				break;
			case 'i':
				printf("%s%d", sep, va_arg(list, int));
				break;
			case 'f':
				printf("%s%f", sep, va_arg(list, double));
				break;
			case 's':
				str = va_arg(list, char *);
				if (!str)
					str = "(nil)";
				printf("%s%s", sep, str);
				break;
			default:
				i++;
				continue;
		}
		sep = ", ";
		i++;
	}
}
va_end(list);
printf("\n");

}

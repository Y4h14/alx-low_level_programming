#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * @n: an intiger number
 *
 */

void print_to_98(int n)
{
int i;
if (n > 98)
{
	for (i = n; i >= 98; i--)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
}
else
{
	for (i = n; i <= 98; i++)
	{
		if (i != 98)
		{
			printf("%d, ", i);
		}
		else
		{
			printf("%d", i);
		}
	}
	putchar('\n');
}
}
#include "main.h"
/**
 * times_table - Entry point
 */
void times_table(void)
{
int i, j, k;
for (i = 0; i <= 9; i++)
{
	for (j = 0; j <= 9; j++)
	{
		k = i * j;
		if (k < 10)
		{
			if (j == 0)
			{
				_putchar(k + '0');
				_putchar(',');
			}
			else if (j != 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
		}
		else if (k >= 10)
		{
			_putchar(' ');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
			if (j != 9)
			{
			_putchar(',');
			}
		}
	}
	_putchar('\n');
}
}

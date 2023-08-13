#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the combinations of 3 numbers.
 *
 * Return: Always 0 (success)
 *
*/
int main(void)
{
int j;
int i;
int k;
for (i = 0; i <= 7; i++)
{
	for (j = 1; j <= 8; j++)
	{
	if (i == j || i > j)
	{
		continue;
	}
		for (k = 2; k <= 9; k++)
		{
			if ((j == k) || (j > k))
			{
				continue;
			}

			putchar('0' + j);
			putchar('0' + i);
			putchar('0' + k);
			if (i + j + k == 7 + 8 + 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}

	}
}
putchar('\n');
return (0);
}

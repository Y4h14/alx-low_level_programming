#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print number combinarions
 *
 * Return: Always 0 (success)
 *
*/
int main(void)
{
int j;
int i;
for (i = 0; i <= 8; i++)
{
	for (j = 0; j <= 9; j++)
	{
		if (i == j || i > j)
		{
			continue;
		}
		putchar('0' + i);
		putchar('0' + j);
		if (i + j != 17)
		{
			putchar(',');
			putchar(' ');
		}
	}
}
putchar('\n');
return (0);
}

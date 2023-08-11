#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print numbers
 *
 * Return: Always 0 (success)
 *
*/
int main(void)
{
int ch;

for (ch = 0; ch <= 9; ch++)
{
	putchar('0' + ch);
	if (ch == 9)
	{
		continue;
	}
	putchar(',');
	putchar(' ');
}
putchar('\n');
return (0);
}

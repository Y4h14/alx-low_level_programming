#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the numbers 0 to 9
 *
 * Return: Always 0 (success)
 *
*/
int main(void)
{
char ch;
char l = '\n';

for (ch = '0'; ch <= '9'; ch++)
{
	putchar(ch);
}
putchar(l);


return (0);
}

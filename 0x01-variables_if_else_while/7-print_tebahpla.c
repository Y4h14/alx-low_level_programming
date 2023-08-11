#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the alphabet
 *
 * Return: Always 0 (success)
 *
*/
int main(void)
{
char ch;
char l = '\n';

for (ch = 'z'; ch >= 'a'; ch--)
{
	putchar(ch);
}
putchar(l);


return (0);
}

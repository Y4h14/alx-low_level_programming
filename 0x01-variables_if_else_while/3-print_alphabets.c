#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints the alphabet in lowercase,
 *  and then in uppercase, followed by a new line
 *
 * Return: Always 0 (success)
 *
*/
int main(void)
{
char ch;
char chc;
char l = '\n';

for (ch = 'a'; ch <= 'z'; ch++)
{
	putchar(ch);
}
for (chc = 'A'; chc <= 'Z'; chc++)
{
	putchar(chc);
}
putchar(l);

return (0);
}

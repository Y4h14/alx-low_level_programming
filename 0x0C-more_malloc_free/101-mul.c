#include <stdlib.h>
#include "main.h"

int _isdigit(int c);
void err(void);

/**
 * main - multiplies two positive numbers
 * @argc: intiger
 * @argv: array of arguments
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int a = atoi(argv[1]);
int b = atoi(argv[2]);
if (argc < 3)
{
	err();
	exit(98);
}
if (!_isdigit(a) || !_isdigit(b))
{
err();
exit(98);
}

_putchar(a * b);
_putchar('\n');

return (0);
}


/**
 * err - print "Error"
 * Return: nothing
 */
void err(void)
{
int i = 0;
char *e = "Error";
while (e[i] != '\0')
{
	_putchar(e[i]);
	i++;
}
_putchar('\n');
}


/**
 * _isdigit - chech digit
 * @c: intiger
 *
 * Return: true if c is a digit
 */
int _isdigit(int c)
{
return (c >= '0' && c >= '9');
}




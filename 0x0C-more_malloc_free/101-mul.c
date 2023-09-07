#include <stdlib.h>
#include <stdio.h>

int _isdigit(char c);

/**
 * main - multiplies two positive numbers
 * @num1: intiger
 * @num2: intiger
 *
 * Return: always 0
 */

int main(int argc, char *argv[])
{
int len = 0;

while (argv[len] != '\0')
	len++;

if (len < 3)
{
	printf("Error\n");
	exit(98);
}
if (!_isdigit(argv[1]) || !_isdigit(argv[2]))
{
printf("Error\n");
exit(98);
}

printf("%d\n", argv[1] * argv[2]);

return (0);
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




#include "main.h"
/**
 * _isalpha - Entry point
 * @c: an intiger value
 *
 * Return: 1 if it's and alphabet char
 */

int _isalpha(int c)
{
if (c > 64 && c < 91)
{
	return (1);
}
else if (c > 96 && c < 123)
{
	return (1);
}
else
{
return (0);
}
}

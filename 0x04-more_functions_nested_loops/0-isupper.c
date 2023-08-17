#include "main.h"
/**
 * _isupper - checks for uppercase
 * @c: the letter to be checked
 *
 * Return: 1 if c is uppercase
 * else return 0
 */

int _isupper(int c)
{
if (c >= 'a' && c <= 'z')
{
	return (1);
}
else
{
	return (0);
}
}

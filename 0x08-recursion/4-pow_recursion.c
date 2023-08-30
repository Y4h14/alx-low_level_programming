#include "main.h"
/**
 * _pow_recursion - returns x raised to the power of y
 * @x: base integer
 * @y: power integer
 * Return: x to the power y
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
else if (y == 0)
	return (1);
return (x * _pow_recursion(x, y - 1));
}

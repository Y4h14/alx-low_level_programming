#include "main.h"
/**
 * factorial - return the factorial
 * @n: an int number
 * Return: the factorial of a number
 */

int factorial(int n)
{
if (n < 0)
	return (-1);
else if (n == 0)
	return (1);

return (n * factorial(n - 1));
}

#include "main.h"
/**
 * rest_to_98 - prints value of a pointer
 * @*n: a pointer to a variable
 * Return: nothing
 */

void reset_to_98(int *n)
{
int x = *n;
n = 98; 
_putchar(x);
}
#include "main.h"
/**
 * reverse_array - reverses an array
 * @a: an array of intigers
 * @n: number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
int i, c;
for (i = 0; (i < (n - 1) / 2); i++)
{
	c = a[i];
	a[i] = a[n - 1 - i];
	a[n - 1 - i] = c;
}
}

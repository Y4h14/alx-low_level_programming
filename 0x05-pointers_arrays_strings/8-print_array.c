#include "main.h"
#include <stdio.h>
/**
 * print_array - prints an anrray
 * @a: an array
 * @n: the size of the array
 * Return: nothing
 */
void print_array(int *a, int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
	if (i != - 1)
	{
		printf("%d, ", a[i]);
	}
	else
	{
		printf("%d\n", a[i]);
	}
}
printf("\n");
}

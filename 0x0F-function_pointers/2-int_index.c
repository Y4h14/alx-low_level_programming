#include "function_pointers.h"
/**
 * int_index - search for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: a pointer to a function used to compare values
 * Return: the index of the first element
 * for which the cmp doen't return.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
	return (-1);
for (i = 0; i < size; i++)
{
	if (cmp(array[i]))
		return (i);
}
return (-1);
}

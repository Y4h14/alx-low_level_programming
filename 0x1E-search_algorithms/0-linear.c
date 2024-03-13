#include <stdio.h>
#include <stdlib.h>
/**
 * linear_search - search for a value in an array
 * @array: an array of integers
 * @size: the size of the array
 * @value: the value to look for
 * Return: the first index where value is found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n",
				i,
				array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}

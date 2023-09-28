#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 given an index
 * @n: pointer to an int
 * @index: the index of int
 * Return: 1 if worked and -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int shift;

	if (index > 64)
		return (-1);
	shift = 1 << index;
	*n = (*n | shift);
	return (1);
}

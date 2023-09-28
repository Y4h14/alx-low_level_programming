#include "main.h"
/**
 * clear_bit - set the value of bit at index to 0
 * @n: pointer to int
 * @index: index
 * Return: 1 if worked and -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int shift;

	if (index > 63)
		return (-1);
	shift = 1 << index;
	if (*n & shift)
		*n ^= shift;
	return (1);
}

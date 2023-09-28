#include "main.h"
/**
 * flip_bits - finds number of bits need to be flipped to go from
 * the number n to m
 * @n: unsigned int
 * @m: unsigend int
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			i++;
		n >>= 1;
		m >>= 1;
	}
	return (i);
}

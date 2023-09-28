#include "main.h"
/**
 * binary_to_uint - converts a binary number into an int
 * @b: - a binary number as a string
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		sum = (2 * sum) + (b[i] - '0');
	}
	return (sum);
}

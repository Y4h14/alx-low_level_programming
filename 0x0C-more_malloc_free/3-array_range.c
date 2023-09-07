#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of intigers
 * @min: intiger
 * @max: intiger
 *
 * Return: pointer to a newly created array
 */

int *array_range(int min, int max)
{
int i;
int *ptr;

if (min > max)
	return (NULL);

ptr = malloc((max - min + 1) * sizeof(int));
if (ptr == NULL)
	return (NULL);

for (i = 0; i <= (max - min); i++)
	ptr[i] = min + i;


return (ptr);
}

#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2d array
 * @width: int
 * @height: int
 * Return: a pointer to a 2d array
 */

int **alloc_grid(int width, int height)
{
unsigned int i;
int **s;

if (!width | !height)
	return (NULL);

s = malloc(height * sizeof(int));
if (s == NULL)
	return (NULL);



for (i = 0; i < (unsigned int)height; i++)
{
	s[i] = malloc(width * sizeof(int));
	if (s[i] == NULL)
		return (NULL);
}
return (s);
}

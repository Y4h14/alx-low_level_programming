#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d grid
 * @grid: a 2d int array
 * @height: height of the array
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
unsigned int i;
for (i = 0; i < (unsigned int)height; i++)
	free(grid[i]);

free(grid);
}

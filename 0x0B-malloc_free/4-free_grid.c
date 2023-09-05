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
int i;
if (grid != NULL && height != 0)
{
	for (i = 0; i <= height; i++)
		free(grid[i]);
	free(grid);
}


}

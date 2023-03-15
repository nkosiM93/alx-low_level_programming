#include "main.h"

/**
 * free_grid -- frees memory creaed by another function
 * @grid:the pointer to the 2D array
 * @height:the number of memory blocks to be freed
 */

void free_grid(int **grid, int height)
{
	int i, j;

	for (i = 0; i < height; i++)
		for(j = 0; j < 4; j++)
		{
			free(grid[i][j]);
		}
}

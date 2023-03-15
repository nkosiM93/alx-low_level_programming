#include "main.h"

/**
 * alloc_grid - returns a pointer to a two-dimensional 
 * array
 * @width: ...
 * @height: ...
 * Return: The pointer to the two-dimensional array
 */

int **alloc_grid(int width, int height) {
    int **grid;  
    int i, j;

    if (width <= 0 ||  height <= 0)
	    return (NULL);

    grid = (int **) malloc(height * sizeof(int *));

    if (grid == NULL)
    {
	    free(grid);
	    return (NULL);
    }

    for (i = 0; i < height; i++) {
        grid[i] = (int *) malloc(width * sizeof(int));
    }

    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}

#include "main.h"

/**
 * alloc_grid - returns a pointer to a two-dimensional 
 * array
 * @width: ...
 * @height: ...
 * Return: The pointer to the two-dimensional array
 */

int **alloc_grid(int width, int height) {
    int **grid;  // Declare pointer to pointer to 2D array
    int i, j;

    // Allocate memory for pointer to 2D array
    grid = (int **) malloc(height * sizeof(int *));

    // Allocate memory for 2D array
    for (i = 0; i < height; i++) {
        grid[i] = (int *) malloc(width * sizeof(int));
    }

    // Initialize 2D array to zero
    for (i = 0; i < height; i++) {
        for (j = 0; j < width; j++) {
            grid[i][j] = 0;
        }
    }

    return grid;
}

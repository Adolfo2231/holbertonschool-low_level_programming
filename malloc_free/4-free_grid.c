#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free space a 2 dimensional array
 * @grid : pointer to pointer array
 * @height : colum
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}

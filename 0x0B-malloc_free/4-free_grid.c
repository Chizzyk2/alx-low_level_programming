#include <stdlib.h>

/**
 * free_grid - grid allocation
 * @grid: grid arrays
 * @height: The height
 * Return:is void
 */

void free_grid(int **grid, int height)
{
	height--;

	while (height >= 0)
	{
		free(*(grid + height));
		height--;
	}
	free(grid);
}

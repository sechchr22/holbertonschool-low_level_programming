#include <stdlib.h>
/**
*free_grid - to free a grid
*@grid: double pointer
*@height: number of columns
*Return: always 0 success
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

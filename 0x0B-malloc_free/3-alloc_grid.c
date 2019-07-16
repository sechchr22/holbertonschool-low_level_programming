#include <stdlib.h>
/**
*alloc_grid - function that returns a pointer to a
*2 dimensional array of integers
*@width: number of columns
*@height: number of rows
*Return: NULL if w or h are 0 or if malloc fails,
*double pointer to resultant matrix otherwise
*/
int **alloc_grid(int width, int height)
{
	int **dad;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dad = malloc(height * sizeof(int *));
	if (dad == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
	{
		dad[i] = malloc(width * sizeof(int));

		if (dad[i] == NULL)
		{
			for (k = i; k >= 0; k--)
			{
				free(dad[k]);
			}
			
			free(dad);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			dad[i][j] = 0;
		}
	}

return (dad);
}


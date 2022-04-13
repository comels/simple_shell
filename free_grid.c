#include "simpleshell.h"

/**
 * free_grid - fonction that free a double pointers
 * @grid: the double pointer to free
 * Return: void
 */
void free_grid(char **grid)
{
	int i;
	int height = 0;

	while (grid[height])
	{
		height++;
	}
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}

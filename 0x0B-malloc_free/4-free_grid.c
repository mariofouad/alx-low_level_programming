#include "main.h"
/**
 * free_grid - start
 * @grid: m
 * @height: m
 *
 * Return: pointer
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

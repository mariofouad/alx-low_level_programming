#include "main.h"
/**
 * alloc_grid - create 2 dim arr
 * @width: wid
 * @height: h
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int rows = height;
	int col = width;
	int **matrix;
	int i;
	int j;

	if (rows <= 0 || col <= 0)
		return (NULL);

	matrix = (int **)malloc(sizeof(int *) * row);

	if (matrix == NULL)
		return (NULL);

	for (i = 0; i < rows; i++)
	{
		matrix[i] = (int *)malloc(sizeof(int) * col);
		if (matrix[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(matrix[j]);
			free(matrix);
			return (NULL);
		}
		for (j = 0; j < col; j++)
			matrix[i][j] = 0;
	}

	return (matrix);
}

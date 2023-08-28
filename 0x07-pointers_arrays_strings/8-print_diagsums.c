#include "main.h"
/**
 * print_diagsums - sum of the two diagonals
 * @a: 1st
 * @size: 2nd
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum += a[i][j];
		}
	}
	printf(sum);
}

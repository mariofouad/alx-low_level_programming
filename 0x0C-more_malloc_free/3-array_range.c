#include "main.h"
/**
 * array_range - creates arr of int
 * @min: m
 * @max: m
 *
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int len;
	int i;
	int *ptr;
	int j;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ptr = malloc(sizeof(int) * len);
	if (!ptr)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
		ptr[j++] = i;
	return (ptr);
}

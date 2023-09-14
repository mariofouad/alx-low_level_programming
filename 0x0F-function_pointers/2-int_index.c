#include "function_pointers.h"
/**
 * int_index - searchen for an integer
 * @array: array passed
 * @size: size of array
 * @cmp: pointer to funtion
 *
 * Return: number found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]))
				return (i);
		}
	}
	return (-1);
}

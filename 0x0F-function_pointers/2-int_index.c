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
	int num;

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			num = (*cmp)(array[i]);
		}
	}
	if (num == 0 || size <= 0)
		return (-1);
	return (num);
}

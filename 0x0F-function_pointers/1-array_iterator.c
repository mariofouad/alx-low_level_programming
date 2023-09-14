#include "function_pointers.h"
/**
 * array_iterator - print passed arr and function
 * @array: arr passed with numbers
 * @size: size of arr
 * @action: pointer to funtion
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

#include "main.h"
/**
 * create_array - creates arr of char
 * @size: size
 * @c: arr
 *
 * Return: pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
	free(array);
}

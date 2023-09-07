#include "main.h"
/**
 * _calloc - malloc
 * @nmemb: mem
 * @size: size
 *
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	nmemb = malloc(sizeof(unsigned int) * size);
	if (nmemb == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		nmemb[i] = 0;
	return (nmemb);
}

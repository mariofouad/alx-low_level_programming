#include "main.h"
/**
 * malloc_checked - allocat memory
 * @b: var
 *
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == NULL)
		return (98);
	else
		return (malloc(b));
}

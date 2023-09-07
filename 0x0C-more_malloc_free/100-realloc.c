#include "main.h"
/**
 * _realloc - realloc
 * @ptr: old ptr
 * @old_size: old
 * @new_size: new
 *
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *optr;

	if (!ptr)
	{
		ptr = malloc(new_size);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size > old_size)
	{
		optr = ptr;
		ptr = malloc(new_size);
		if (!ptr)
		{
			free(optr);
			return (NULL);
		}
		memcpy(ptr, optr, old_size);
		free(optr);

	}
	if (new_size < old_size)
	{
		optr = ptr;
		ptr = malloc(new_size);
		if (!ptr)
		{
			free(optr);
			return (NULL);
		}
		memcpy(ptr, optr, new_size);
		free(optr);
	}
	return (ptr);
}

#include "main.h"
#include <string.h>
/**
 * _strcpy - copy string
 * @dest: passed buffer
 * @src: passed string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	dest = strcpy(src);

	return (dest);
}

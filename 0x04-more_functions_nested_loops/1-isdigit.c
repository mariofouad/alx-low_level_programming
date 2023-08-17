#include "main.h"
/**
 * _isdigit - check if c is digit
 * @c: passed par
 *
 * Return: 1 or 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

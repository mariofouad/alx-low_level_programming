
#include "main.h"

/**
 * _isupper - check upper or lower
 * @c: passed parammeter
 *
 * Return: 0 or 1.
 */
int _isupper(int c)
{
	int check = 0;

	if (c >= 65 && c <= 90)
	{
		check = 1;
	}
	return (check);
}

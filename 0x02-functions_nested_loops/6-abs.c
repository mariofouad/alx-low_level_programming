#include "main.h"
/**
 * _abs - prints abs value of a number
 * @n: the passed number
 *
 * Return: the number
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}

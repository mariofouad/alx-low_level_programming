#include "main.h"
/**
 * _isalpha - checks if passed char is a letter
 * @c: the char passed
 *
 * Return: 1 in case true 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
}

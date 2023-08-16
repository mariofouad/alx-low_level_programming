#include "main"
/**
 * _islower - check if lowecase
 * @c: the char passed
 *
 * Return: 1 in case true 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

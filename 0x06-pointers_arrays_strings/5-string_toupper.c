#include "main.h"
/**
 * string_toupper - convert all to upper casses
 * @s: passes arr
 *
 * Return: pointer
 */
char *string_toupper(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 32;
	}
	return (s);
}

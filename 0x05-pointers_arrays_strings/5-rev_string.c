#include "main.h"
#include <string.h>

/**
 * rev_string - prints
 * @s: passed
 */

void rev_string(char *s)
{
	int len = strlen(s);
	int i;

	for (i = 0; i < (len / 2); i++)
	{
		char temp;

		temp = s[(len - 1) - i];
		s[(len - 1) - i] = s[0];
		s[i] = temp;
	}
}

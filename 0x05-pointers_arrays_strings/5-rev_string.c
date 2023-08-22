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
	int length = len - 1;

	for (i = 0; i < (len / 2); i++)
	{
		char temp;

		temp = s[length - i];
		s[length - i] = s[i];
		s[i] = temp;
	}
}

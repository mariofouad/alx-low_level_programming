#include "main.h"
#include <string.h>
/**
 * puts2 - prints only even ideces
 * @str: passed string
 */
void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i++)
	{
		if ((i % 2) == 0)
		{
			putchar(str[i]);
		}
	}
	putchar('\n');
}

#include "main.h"
#include <string.h>
/**
 * puts_half - prints half the string
 * @str: passed string
 */
void puts_half(char *str)
{
	int len = strlen(str);
	int length = len - 1;
	int i;
	int start;

	if ((len % 2) == 0)
		start = (len / 2);
	else
		start = (len / 2) + 1;
	for (i = start; i <= length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

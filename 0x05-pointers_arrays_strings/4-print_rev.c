#include "main.h"
#include <string.h>
/**
 * print_rev - print reversed
 * @s: passed string
 */
void print_rev(char *s)
{
	int len = strlen(s);
	int i;

	for (i = len - 1; i >= 0; i--)
	{
		putchar(s[i]);
	}
	putchar('\n');
}

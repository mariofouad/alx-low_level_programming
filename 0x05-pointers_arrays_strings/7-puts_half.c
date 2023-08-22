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

	for (i = (len / 2); i < length; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}

#include "main.h"
#include <string.h>
/**
 * print_rev - print reversed
 * @s: passed string
 */
void print_rev(char *s)
{
	strrev(s);
	printf("%s\n", s);
}

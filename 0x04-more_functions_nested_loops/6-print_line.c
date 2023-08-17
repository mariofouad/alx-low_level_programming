#include "main.h"
/**
 * print_line - draws an st line
 * @n: no of times
 */
void print_line(int n)
{
	int i;

	for (i = n; i > 0; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

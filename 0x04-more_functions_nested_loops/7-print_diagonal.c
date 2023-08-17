#include "main.h"
/**
 * print_diagonal - prints diagonal
 * @n: number
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = n; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}

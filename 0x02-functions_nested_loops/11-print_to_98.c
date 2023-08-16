#include "main.h"
/**
 * print_to_98 - print natural numbers
 * @n: start
 */
void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n < 10 && n > -10)
		{
			_putchar(n + '0');
		}
		else
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		n++;
	}
	_putchar('\n');
}

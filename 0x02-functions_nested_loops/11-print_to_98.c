#include "main.h"
/**
 * print_to_98 - print natural numbers
 * @n: start
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		for (n; n >= 98; n--)
		{
			_putchar((n / 10) + '0');
			if (n >= 100)
				_putchar((n / 10) % 10 + '0');
			_putchar((n % 10) + '0');
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		for (n; n <= 98; n++)
		{
			if (n < 0)
			{
				_putchar(45);
				_puctchar((-1) * n + '0');
			}
			if (n < 10 && n >= 0)
				_putchar(n + '0');
			else
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			if (n != 98)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

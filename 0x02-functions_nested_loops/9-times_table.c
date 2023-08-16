#include "main.h"
/**
 * times_table - prints time table
 */
void times_table(void)
{
	int i;
	int j;
	int res;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			res = i * j;
			if (j != 10)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res < 10)
			{
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else
			{
				_putchar(res + '0');
			}
		}
		_putchar('\n');
	}
}

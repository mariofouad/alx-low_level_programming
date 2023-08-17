#include "main.h"
/**
 * more_numbers - print all except 2 and 4
 */
void more_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}

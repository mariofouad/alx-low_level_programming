#include "main.h"
/**
 * print_alphabet_x10 - prints 10*the alp
 */
void print_alphabet_x10(void)
{
	int times = 0;
	char ch;

	while (times < 10)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		times++;
	}
}

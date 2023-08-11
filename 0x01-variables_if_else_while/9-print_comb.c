#include <stdio.h>
/**
 * main - entry
 *
 * Description: print numbers
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
		if (num != 9)
		{
			putchar(',');
		}
		else
		{
			putchar('$');
		}
	}
	putchar('\n');
	return (0);
}

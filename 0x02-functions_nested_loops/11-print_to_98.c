#include "main.h"
/**
 * print_to_98 - print natural numbers
 * @n: start
 */
void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", n);
	}
	else
	{
		for (i = n; i < 98; i++)
			printf("%d, ", n);
	}
	printf(98'\n');
}

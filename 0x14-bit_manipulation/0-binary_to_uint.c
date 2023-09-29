#include "main.h"
/**
 * binary_to_uint - change binary to decimal
 * @b: string passed
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;

	for (i = 0; b[i] != '\0'; i++)
	{
		num += (1 << i) * (b[i] - '0');
	}
	return (num);
}

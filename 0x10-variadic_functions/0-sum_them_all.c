#include "variadic_functions.h"
/**
 * sum_them_all - check the code
 * @n: fst num
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list list;

	sum = 0;
	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}

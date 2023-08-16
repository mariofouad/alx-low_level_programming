#include "main.h"
/**
 * print_last_digit - print last digit
 * @n: the passed value
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n + '0');
	return (n);
}

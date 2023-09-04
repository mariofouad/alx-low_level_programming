#include <unistd.h>
#include "main.h"
/**
 * _putchar - prints single char
 * @ch : the char passed
 *
 * Return: the fn write
 */
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

#include "main.h"
/**
 * main - entry point
 *
 * Description : print _puchar
 *
 * Return: 0
 */
int main(void)
{
	char sent[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(sent[i]);
	}
	_putchar('\n');
	return (0);
}

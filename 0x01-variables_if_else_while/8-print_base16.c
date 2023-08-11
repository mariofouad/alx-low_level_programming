#include <stdio.h>
/**
 * main - entry level
 *
 * Description: prints hexa equivilant
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;
	char alp = 'a';

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}
	while (alp != 'g')
	{
		putchar(alp);
		alp++;
	}
	putchar('\n');
	return (0);
}

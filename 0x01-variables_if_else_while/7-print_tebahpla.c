#include <stdio.h>
/**
 * main - entry point
 *
 * Description: Prints alps in reverse
 *
 * Return: 0
 */
int main(void)
{
	char alp = 'z';

	while (alp >= 'a')
	{
		putchar(alp);
		alp--;
	}
	putchar('\n');
	return (0);
}

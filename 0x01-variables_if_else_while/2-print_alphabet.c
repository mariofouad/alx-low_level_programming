#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints lowercase alphabet
 *
 * Return: 0
 */
int main(void)
{
	char alp = 'a';
	int i = 0;

		for (i = 0; i < 26; i++)
		{
			putchar(alp);
			putchar('\n');
			alp++;
		}
	return (0);
}

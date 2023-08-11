#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints lowercase except p, q
 *
 * Return: 0
 */
int main(void)
{
	char alp = 'a';
	int i = 0;

	while (i < 26)
	{
		if (alp != 'q' && alp != 'e')
		{
			putchar(alp);
		}
		i++;
		alp++;
	}
	putchar('\n');
	return (0);
}

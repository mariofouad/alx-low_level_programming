#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all letters
 *
 * Return: 0
 */

int main(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 26)
	{
		putchar(letter);
		i = i + 1;
		if (i == 26 && letter != 'Z')
		{
			letter = 'A';
			i = 0;
		}
		else
		{
			letter = letter + 1;
		}
	}
	putchar('\n');
	return (0);
}

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
		i++;
		if (i == 26 && letter != 90)
		{
			letter = 60;
			i = 0;
		}
		else
		{
			letter++;
		}
	}
	return (0);
}

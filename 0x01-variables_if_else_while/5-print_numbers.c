#include <stdio.h>
/**
 * main - entry point
 *
 * Description: prints numbers
 *
 * Return: 0
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}

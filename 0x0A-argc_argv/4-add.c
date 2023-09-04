#include <stdlib.h>
#include <stdio.h>
/**
 * main - start
 * @argc: num
 * @argv: pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int sum = 0;
	int i;

	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}

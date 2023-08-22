#include "main.h"
#include <string.h>
/**
 * print_array - prints arrays
 * @a: passed array
 * @n: passed size
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i])
	}
	printf("\n");
}

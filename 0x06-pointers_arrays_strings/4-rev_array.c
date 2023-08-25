#include "main.h"
/**
 * reverse_array - reverses arr
 * @a: passed arr
 * @n: size
 */
void reverse_array(int *a, int n);
{
	int len = n - 1;
	int i;

	for (i = 0; i < (n / 2); i++)
	{
		int temp;

		temp = s[len - i];
		s[len - i] = s[i];
		s[i] = temp;
	}
}

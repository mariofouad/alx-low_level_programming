#include "main.h"
/**
 * swap_int - swap the numbers
 * @a: fst num
 * @b: sec num
 */
void swap_int(int *a, int *b)
{
	int fst = *a;
	int sec = *b;

	*b = fst;
	*a = sec;
}

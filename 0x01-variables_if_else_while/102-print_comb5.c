#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print combinations
 *
 * Return: 0
 */
int main(void)
{
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (l = j + 1; l <= 10; l++)
				{
					int d = l;
					int m = k;

					if (i == 0 && j == 0 && l == 10 && k != 9)
					{
						d = l % 10;
						m = k + 1;
					}
					else if (l == 10)
					{
						continue;
					}
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(m + '0');
					putchar(d + '0');
					if ((i == 9) && (j == 8) && (k == 9) && (l == 9))
					{
					}
					else
					{
						putchar(',');
						putchar(' ');
					}

				}

			}
		}

	}
	putchar('\n');
	return (0);
}

#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _atoi - change string to int
 * @s: passed string
 *
 * Return: the number
 */
int _atoi(char *s)
{
	int p = 0;
	int n = 0;
	int num = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '+')
			p++;
		else if (s[i] == '-')
			n++;
		else if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - '0');
		i++;
	}

	if (n % 2 == 1)
		num = (-1) * num;

	return (num);
}

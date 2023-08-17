#include <stdio.h>
#include <math.h>

/**
 * largest_prime_factor - finds the largest prime factor of a number
 * @n: the number to find the largest prime factor for
 * Return: the largest prime factor
 */
long largest_prime_factor(long n)
{
	long max_prime = -1;
	long i;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}
	for (i = 3; i <= sqrt(n); i += 2)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n /= i;
		}
	}

	if (n > 2)
	{
		max_prime = n;
	}

	return max_prime;
}

int main(void)
{
	long num = 612852475143;
	long result = largest_prime_factor(num);

	printf("%ld\n", result);
	return (0);
}


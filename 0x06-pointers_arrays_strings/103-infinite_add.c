#include "main.h"

/**
 * infinite_add - adds two numbers
 * @n1: first number as string
 * @n2: second number as string
 * @r: buffer to store the result
 * @size_r: size of buffer r
 *
 * Return: pointer to the result
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len_n1 = 0;
int len_n2 = 0;
int carry = 0;
int i, sum;

while (n1[len_n1])
len_n1++;
while (n2[len_n2])
len_n2++;
if (len_n1 + 1 > size_r || len_n2 + 1 > size_r)
return (0);
r[size_r] = '\0';
len_n1--;
len_n2--;
for (i = size_r - 1; len_n1 >= 0 || len_n2 >= 0; i--)
{
sum = carry;
if (len_n1 >= 0)
sum += n1[len_n1--] - '0';
if (len_n2 >= 0)
sum += n2[len_n2--] - '0';
carry = sum / 10;
r[i] = sum % 10 + '0';
}
if (carry)
{
if (size_r <= 1)
return (0);
r[--i] = carry + '0';
}
if (i < 0)
return (0);
return (r + i);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * _isdigit - checks if a character is a digit
 * @c: the character to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * main - multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
    int i, j, len1, len2, carry, sum;
    char *result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    for (i = 1; i <= 2; i++)
    {
        for (j = 0; argv[i][j] != '\0'; j++)
        {
            if (!_isdigit(argv[i][j]))
            {
                printf("Error\n");
                return (98);
            }
        }
    }

    len1 = j;
    len2 = j;

    result = malloc(sizeof(char) * (len1 + len2 + 1));

    if (!result)
    {
        printf("Error\n");
        return (98);
    }

    for (i = 0; i <= len1 + len2; i++)
        result[i] = '0';

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            sum = (argv[1][i] - '0') * (argv[2][j] - '0') + (result[i + j + 1] - '0') + carry;
            carry = sum / 10;
            result[i + j + 1] = (sum % 10) + '0';
        }
        result[i + j + 1] = (carry % 10) + '0';
    }

    if (result[0] == '0')
        result++;

    printf("%s\n", result);

    free(result);

    return (0);
}

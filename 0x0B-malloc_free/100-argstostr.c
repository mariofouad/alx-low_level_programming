#include "main.h"
/**
 * argstostr - start
 * @ac: m
 * @av: m
 *
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	int j;
	int len = 0;
	int Tlen = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		Tlen += len + 1;
		len = 0;
	}

	str = malloc(sizeof(char) * Tlen);

	if (str == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			str[len++] = av[i][j];
		str[len++] = (i == ac - 1) ? '\0' : ' ';
	}

	return (str);
}

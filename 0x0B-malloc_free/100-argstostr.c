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

	if (ac == 0 || av == NULL)
		return (NULL);

	str = malloc(sizeof(char) * ac);

	for (i = 0; i < ac; i++)
		str[i] += argv [i];

	str[argc] = '\0';
	return (str);
}

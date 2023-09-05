#include "main.h"
/**
 * _strdup - start
 * @str: string
 *
 * Return: Null or pointer
 */
char *_strdup(char *str)
{
	char *nstr;
	int len = strlen(str);

	if (str == NULL)
		return (NULL);

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		nstr[i] = str[i];

	return (nstr);

	free(nstr);
}

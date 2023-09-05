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

	if (str == NULL)
		return (NULL);
	nstr = malloc(sizeof(char) * (strlen(str)));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		nstr[i] = str[i];
	return (nstr);
	free(nstr);
}

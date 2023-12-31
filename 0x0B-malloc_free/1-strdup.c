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
	int len;
	int i;

	if (str == NULL)
		return (NULL);

	len = strlen(str);
	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		nstr[i] = str[i];
	nstr[len] = '\0';
	return (nstr);
}

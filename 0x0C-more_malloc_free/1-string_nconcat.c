#include "main.h"
/**
 * string_nconcat - concat 2 strings
 * @s1: str 1
 * @s2: n from s2
 * @n: num of str 2
 *
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int len;
	int Tlen;
	char *nstr;
	int i;
	int j;

	if (n > strlen(s2))
		len = strlen(s2);
	else
		len = n;

	Tlen = len + strlen(s1) + 1;

	nstr = malloc(sizeof(*nstr) * Tlen);
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
		nstr[i] = s1[i];
	nstr[strlen(s1)] = " ";

	for (j = 0; j < len; j++)
		nstr[(strlen(s1) + 1) + j] = s2[j];
	nstr[Tlen] = '\0';
	return (nstr);
}

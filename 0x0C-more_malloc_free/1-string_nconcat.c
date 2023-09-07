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
	unsigned int len1, len2;
	int i, j;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = strlen(s1);
	len2 = str;en(s2);
	if (n >= len2)
		n = len2;
	nstr = malloc(sizeof(char) * (len1 + n + 1));
	if (nstr == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		nstr[i] = s1[i];
	for (j = 0; j < n; j++)
		nstr[i + j] = s2[j];
	nstr[i + j] = '\0';
	return nstr;
}

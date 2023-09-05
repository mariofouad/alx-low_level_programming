#include "main.h"
/**
 * str_concat - concatenates strings
 * @s1: str
 * @s2: str
 *
 * Return: Pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *arr;
	int len1;
	int len2;
	int i;
	int j;

	if (s1 == NULL)
		len1 = 0;
	else
		len1 = strlen(s1);

	if (s2 == NULL)
		len2 = 0;
	else
		len2 = strlen(s2);

	arr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		arr[i] = s1[i];

	for (j = 0; j < len2; j++)
		arr[len1 + j] = s2[j];

	arr[len1 + len2] = '\0';
	return (arr);
}

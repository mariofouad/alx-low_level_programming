#include "main.h"
/**
 * cap_string - capitalize fsts
 * @s: fst
 *
 * Return: pointer
 */
char *cap_string(char *s)
{
	int len = strlen(s);
	int i;
	bool newword = true;

	for (i = 0; i < len; i++)
	{
		if (newword && (s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 32;
			newword = false;
		}
		if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' || s[i] == ','
				|| s[i] == ';' || s[i] == '.' || s[i] == '!' || s[i] == '?'
				|| s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
				|| s[i] == '}')
		{
			newword = true;
		}
	}
	return (s);
}

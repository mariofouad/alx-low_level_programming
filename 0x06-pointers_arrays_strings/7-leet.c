#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: input string
 *
 * Return: pointer to the modified string
 */
char *leet(char *s)
{
int i, j;
char *letters = "AEOTLaeotl";
char *leet_nums = "4307143071";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (s[i] == letters[j])
{
s[i] = leet_nums[j];
break;
}
}
}
return (s);
}


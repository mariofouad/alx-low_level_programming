#include "main.h"
/**
 * rot13 - encodes a string using ROT13 cipher
 * @s: input string
 *
 * Return: pointer to the modified string
 */
char *rot13(char *s)
{
int i, j;
char *letters = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *rot13_chars = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; letters[j] != '\0'; j++)
{
if (s[i] == letters[j])
{
s[i] = rot13_chars[j];
{
break;
}
}
}
return (s);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
int count = 0, i, in_word = 0;

for (i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
{
if (in_word)
{
count++;
in_word = 0;
}
}
else
{
in_word = 1;
}
}
if (in_word)
count++;

return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A rray of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
char **words;
int i, j, k, len = 0, word_count = 0;

if (str == NULL || *str == '\0' || count_words(str) == 0)
return (NULL);
word_count = count_words(str);
words = malloc(sizeof(char *) * (word_count + 1));
if (words == NULL)
return (NULL);
for (i = 0; i < word_count; i++)
{
while (*str == ' ' || *str == '\t' || *str == '\n')
str++;
len = 0;
while (str[len] != ' ' && str[len] != '\t' && str[len] != '\n'
		&& str[len] != '\0')
len++;
words[i] = malloc(sizeof(char) * (len + 1));
if (words[i] == NULL)
{
for (k = 0; k < i; k++)
free(words[k]);
free(words);
return (NULL);
}
for (j = 0; j < len; j++)
words[i][j] = str[j];
words[i][j] = '\0';
str += len;
}
words[word_count] = NULL;
return (words);
}

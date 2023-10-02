#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 * read_textfile - start
 * @filename: the name of the file
 * @letters: letters
 * Return: 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	ssize_t numread, numprinted;
	char *buffer;

	if (filename == NULL)
		return (0);

	fp = fopen(filename, "r");
	if (!fp)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		fclose(fp);
		return (0);
	}
	numread = fread(buffer, sizeof(char), letters, fp);
	numprinted = fwrite(buffer, sizeof(char), numread, stdout);
	free(buffer);
	fclose(fp);

	return (numprinted);
}

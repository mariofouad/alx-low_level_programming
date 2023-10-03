#include"main.h"
/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: Pointer to the name of the file
 * @letters: Number of letters it should read and print
 * Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	ssize_t num_read, num_printed;
	char *buffer;

	if (!filename)
		return (0);
	file = fopen(filename, "r");
	if (!file)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		fclose(file);
		return (0);
	}
	num_read = fread(buffer, sizeof(char), letters, file);
	num_printed = fwrite(buffer, sizeof(char), num_read, stdout);
	free(buffer);
	fclose(file);
	return (num_printed);

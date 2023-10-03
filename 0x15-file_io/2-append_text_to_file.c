#include"main.h"
/**
 * append_text_to_file - append
 * @filename: name
 * @text_content: text
 * Return: status
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nw, len;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		nw = write(fd, text_content, strlen(text_content));
	if (nw == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

#include "main.h"
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - create a file
 * @filename: name of the file
 * @text_content: to be written
 * Return: num
 */
int create_file(const char *filename, char *text_content)
{
	int fd, nw;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		nw = write(fd, text_content, strlen(text_content));
		if (nw == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

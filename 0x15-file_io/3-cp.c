#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * error_message - Prints an error message to stderr and exits with a code.
 * @code: The exit code.
 * @message: The error message format string.
 * @extra: Additional information to include in the message.
 */
void error_message(int code, const char *message, const char *extra)
{
	dprintf(2, message, extra);
	exit(code);
}

/**
 * main - Copies the content of one file to another.
 * @argc: The number of arguments.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success, otherwise exits with a specific code.
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t num_read, num_written;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_message(97, "Usage: cp file_from file_to\n", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_message(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_TRUNC
			| O_CREAT, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_to == -1)
		error_message(99, "Error: Can't write to %s\n", argv[2]);

	while ((num_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		num_written = write(fd_to, buffer, num_read);
		if (num_written != num_read)
			error_message(99, "Error: Can't write to %s\n", argv[2]);
	}

	if (num_read == -1)
		error_message(98, "Error: Can't read from file %s\n", argv[1]);

	if (close(fd_from) == -1 || close(fd_to) == -1)
		error_message(100, "Error: Can't close fd\n", "");

	return (0);
}

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "main.h"

void throw_err(int, char*, char*, int);

/**
 * throw_err - Handles errror in file copy
 * @err: Exit status
 * @file_from: File to copy from
 * @file_to: File to copy to
 * @fd_value: File descriptor that has an error
 */
void throw_err(int err, char *file_from, char *file_to, int fd_value)
{
	switch (err)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
			break;
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
			exit(98);
			break;
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
			break;
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_value);
			exit(100);
			break;
		default:
			dprintf(STDERR_FILENO, "Unknown error");
			exit(999);
	}
}

/**
 * main - Copies the content of a file to another one
 * @argc: Argument count
 * @argv: Argument vector, must contains a path to 2 files: file_from file_to
 *
 * Return:
 *	0 if success, else exits with:
 *	97 if wrong argument count
 *	98 if file_from doesn't exist or can't be read
 *	99 if can't create or write file_to
 *	100 if can't close a file descriptor
 */
int main(int argc, char **argv)
{
	int fd_from;
	int fd_to;
	int from_close;
	int to_close;
	int rd;
	int written;
	char buf[1024];
	char *file_from;
	char *file_to;

	if (argc != 3)
		throw_err(97, "nil", "nil", -1);

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);

	if (fd_from == -1)
		throw_err(98, file_from, "nil", -1);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
		throw_err(99, "nil", file_to, -1);

	while ((rd = read(fd_from, buf, sizeof(buf))) != 0)
	{
		if (rd == -1)
			throw_err(98, file_from, "nil", -1);

		written = write(fd_to, buf, rd);

		if (written == -1)
			throw_err(99, "nil", file_to, -1);
	}

	from_close = close(fd_from);
	to_close = close(fd_to);

	if (from_close == -1)
		throw_err(100, "nil", "nil", fd_from);

	if (to_close == -1)
		throw_err(100, "nil", "nil", fd_to);

	return (0);
}

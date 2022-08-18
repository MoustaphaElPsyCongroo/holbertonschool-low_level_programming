#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to stdout
 * @filename: Path of the file to read
 * @letters: Number of letters that should be read and print
 *
 * Return:
 *	The number of letters that could be read
 *	0 if file can't be opened or read, or filename NULL,
 *	or if write fails or doesn't write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read;
	ssize_t bytes_written;
	char *buf;

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
	{
		free(buf);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1)
	{
		free(buf);
		return (0);
	}

	close(fd);

	return (bytes_written);
}

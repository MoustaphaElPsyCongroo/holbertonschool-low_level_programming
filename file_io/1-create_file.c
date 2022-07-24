#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Creates a file, optionally writing in it
 * @filename: Path of the file to create
 * @text_content: Optional text content of the file
 *
 * Return:
 *	1 if success
 *	0 if fail or filename NULL
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	length = strlen(text_content);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		written = write(fd, text_content, length);

		if (written == -1)
			return (-1);
	}

	close(fd);

	return (1);
}

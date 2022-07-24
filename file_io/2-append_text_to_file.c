#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Path of the file
 * @text_content: Text to append to the file
 *
 * Return:
 *	1 if success (also if NULL text_content but file exists)
 *	-1 if fail or NULL text_content and file doesn't exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int length;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		written = write(fd, text_content, length);

		if (written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

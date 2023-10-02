#include "main.h"
#include <string.h>

/**
 * create_file - Creates a new file with the specified content.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to the string to write to the file.
 *
 * Return: On success, 1. On failure, -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);

	len = (text_content != NULL) ? strlen(text_content) : 0;

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	w = (len > 0) ? write(fd, text_content, len) : 0;

	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}

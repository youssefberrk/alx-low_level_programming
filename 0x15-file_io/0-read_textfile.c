#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Text file to be read.
 * @letters: Number of letters to be read.
 *
 * Return: The actual number of bytes read and printed.
 *         0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t w = 0;
	ssize_t t;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		return (0);
	}

	while ((t = read(fd, buf, letters)) > 0)
	{
		w += write(STDOUT_FILENO, buf, t);
	}

	free(buf);
	close(fd);
	return (w);
}

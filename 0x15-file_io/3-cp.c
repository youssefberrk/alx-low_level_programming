#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *destination);
void close_descriptor(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes of memory for a buffer.
 * @destination: Name of the destination file where characters are stored.
 *
 * Return: Pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *destination)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to allocate memory for %s\n", destination);
		exit(99);
	}

	return (buffer);
}

/**
 * close_descriptor - Close a file descriptor.
 * @fd: File descriptor to be closed.
 */
void close_descriptor(int fd)
{
	int result;

	result = close(fd);

	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Unable to close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copy contents of a source file to a destination file.
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If argument count is incorrect, exit with code 97.
 * If source file doesn't exist or cannot be read, exit with code 98.
 * If destination file cannot be created or written to, exit with code 99.
 * If either source or destination file cannot be closed, exit with code 100.
 */
int main(int argc, char *argv[])
{
	int source, destination, read_bytes, written_bytes;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: my_cp source_file destination_file\n");
		exit(97);
	}

	buffer = allocate_buffer(argv[2]);
	source = open(argv[1], O_RDONLY);
	read_bytes = read(source, buffer, 1024);
	destination = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || read_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Unable to read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		written_bytes = write(destination, buffer, read_bytes);
		if (destination == -1 || written_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Unable to write to file %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		read_bytes = read(source, buffer, 1024);
		destination = open(argv[2], O_WRONLY | O_APPEND);

	} while (read_bytes > 0);

	free(buffer);
	close_descriptor(source);
	close_descriptor(destination);

	return (0);
}

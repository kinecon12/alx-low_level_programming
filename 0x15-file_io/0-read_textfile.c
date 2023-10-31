#include "main.h"
/**
 * read_textfile - Reads the files and prints it to the POSIX stdout.
 * Author: kingsley
 * @filename: Name of the file that needs to be read.
 * @letters: Is the num of letters the function should print.
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fname;
	int m;
	int read_let;
	char *buffer;

	if (filename == NULL)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	fname = open(filename, O_RDONLY);
	if (fname == -1)
	{
		free(buffer);
		return (0);
	}

	read_let = read(fname, buffer, letters);
	if (read_let == -1)
	{
		close(fname);
		free(buffer);
		return (0);
	}

	for (m = 0; m < read_let; m++)
	{
		if (write(STDOUT_FILENO, &buffer[m], 1) == -1)
		{
			close(fname);
			free(buffer);
			return (0);
		}

	}
	close(fname);
	free(buffer);
	return (read_let);
}

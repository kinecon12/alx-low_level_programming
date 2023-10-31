#include "main.h"

/**
 * create_file - The fun that creates a file.
 * Author: Kingsley
 * @filename: Name of the file to create.
 * @text_content: Is a string to write to the file.
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fname;
	int m;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	fname = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
	if (fname < 0)
	{
		if (errno == EEXIST)
		{
			fname = open(filename, O_WRONLY | O_TRUNC);
			if (fname == -1)
				return (-1);
		}
		else
			return (-1);
	}
	for (m = 0; text_content[m] != '\0'; m++)
	{
		if (write(fname, &text_content[m], 1) == -1)
			return (-1);
	}
	close(fname);
	return (1);
}

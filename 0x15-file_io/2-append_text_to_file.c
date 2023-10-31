#include "main.h"
/**
 * append_text_to_file - Add or appends text at the end of a file.
 * Author: kingsley
 * @filename: Name of the file.
 * @text_content: String to append at the end of a file.
 * Return: 1 if the file exist, -1 if the file does not exist, or if you
 * don't have the required permissions to write to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fname;
	int m;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	fname = open(filename, O_APPEND | O_WRONLY);
	if (fname == -1)
		return (-1);
	for (m = 0; text_content[m] != '\0'; m++)
	{
		if (write(fname, &text_content[m], 1) == -1)
		{
			close(fname);
			return (-1);
		}
	}
	close(fname);
	return (1);
}

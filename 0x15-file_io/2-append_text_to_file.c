#include "main.h"

/**
 * append_text_to_file - appends text to the end of file
 * @filename: name of the file
 * @text_content: NULL terminating string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file, status, words = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		status = write(file, text_content, words);
		if (status == -1)
			return (-1);
	}
	close(file);
	return (1);
}

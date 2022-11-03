#include "main.h"

/**
 * create_file - creates a file and write to it
 * @filename: name of the new file
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int file, ws, words = 0;

	if (!filename)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		ws = write(file, text_content, words);
		if (ws == -1)
			return (-1);
	}
	close(file);

	return (1);
}

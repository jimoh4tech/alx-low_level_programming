#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	ssize_t rc, wc;
	char *buffer;

	if (!filename)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	rc = read(file, buffer, letters);
	if (rc == -1)
		return (0);

	wc = write(STDOUT_FILENO, buffer, rc);
	if (wc == -1 || rc != wc)
		return (0);

	free(buffer);
	close(file);
	return (wc);
}

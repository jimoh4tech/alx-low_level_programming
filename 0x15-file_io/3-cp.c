#include "main.h"

#define MAXSIZE 1024

/**
 * error_exit - prints error message and exit
 * @err: exit number
 * @str: name of the file
 * @fd: file descriptor
 */

void error_exit(int err, char *str, int fd)
{
	switch (err)
	{
	case 97:
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(err);
	case 98:
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", str);
		exit(err);
	case 99:
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(err);
	case 100:
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(err);
	}
}



/**
 * main - Entry point
 * @argc: arguments counts
 * @argv: argument vectors
 *
 * Description: Program that copies one file content to another
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int fin, fout, rs, ws, cin, cout;
	char buffer[MAXSIZE];

	if (argc != 3)
		error_exit(97, NULL, 0);

	fin = open(argv[1], O_RDONLY);
	if (fin == -1)
		error_exit(98, argv[1], 0);

	fout = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fout == -1)
		error_exit(99, argv[2], 0);

	while ((rs = read(fin, buffer, MAXSIZE)) != 0)
	{
		if (rs == -1)
			error_exit(98, argv[1], 0);

		ws = write(fout, buffer, rs);
		if (ws == -1)
			error_exit(99, argv[2], 0);
	}

	cin = close(fin);
	if (cin == -1)
		error_exit(100, NULL, fin);

	cout = close(fout);
	if (cout == -1)
		error_exit(100, NULL, fout);

	return (0);
}

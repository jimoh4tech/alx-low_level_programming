#include <stdio.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vecctor arrray
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: length of args
 * @argv: pointer to args array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int idx, nbytes;
	char *ptr = (char *) main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nbytes = atoi(argv[1]);
	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (idx = 0; idx < nbytes; idx++)
	{
		printf("%02x", ptr[idx] & 0xFF);
		if (idx != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}

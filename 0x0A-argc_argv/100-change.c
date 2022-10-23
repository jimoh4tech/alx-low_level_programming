#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vecctor arrray
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int c, change = 0, i = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);

	for (i = 0; i < 5; i++)
	{
		if (c >= coins[i])
		{
			change += c / coins[i];
			c %= coins[i];
		}
	}
	printf("%d\n",  change);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: length of args
 * @argv: pointer to args array
 *
 * Return: 98 if error, else 0.
 */

int main(int argc, char *argv[])
{
	char *op;
	int result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (op == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if (num2 == 0 && (*op == '/' || *op == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	result = get_op_func(op)(num1, num2);
	printf("%d\n", result);

	return (0);
}

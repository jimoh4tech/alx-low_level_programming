#include "main.h"
#include <stdlib.h>

/**
 * exit_code - exits the code
 */

void exit_code(void)
{
	_putchar('E');
	_putchar('r');
	_putchar('r');
	_putchar('o');
	_putchar('r');
	_putchar('\n');
	exit(98);
}

/**
 * is_valid - checks if the given @s is valid
 * @s: address of the string
 */

void is_valid(char *s)
{
	int i = 0;

	if (s[i] == '-')
		i = 1;
	for (; s[i] != '\0'; i++)
		if (s[i] < 48 || s[i] > 57)
			exit_code();
}

/**
 * _atol - converts string to long
 * @s: address of the string
 * Return: address of the string
 */

long int _atol(char *s)
{
	long int sum = 0;
	int i = 0, sign = 1;

	if (s[i] == '-')
	{
		sign = -1;
		i = 1;
	}

	for (; s[i] != '\0'; i++)
		sum = (sum * 10) + (s[i] % 48);

	sum *= sign;
	return (sum);
}

/**
 * print_num - outputs the large number
 * @n: large number
 */

void print_num(long int n)
{
	long int temp = n;
	char *s;
	int i = 0;

	s = malloc(sizeof(char) * 100);
	if (n < 0)
	{
		temp *= -1;
		_putchar('-');
	}
	while (temp != 0)
	{
		s[i] = (temp % 10) + '0';
		i++;
		temp /= 10;
	}

	while (i >= 0)
	{
		_putchar(s[i]);
		--i;
	}

	_putchar('\n');
}

/**
 * main - Entry ponint
 * @argc: length of argument
 * @argv: array of arguments
 *
 * Return: Always 0;
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
		exit_code();

	is_valid(argv[1]);
	is_valid(argv[2]);

	print_num(_atol(argv[1]) * _atol(argv[2]));

	return (0);
}

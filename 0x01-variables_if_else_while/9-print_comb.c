#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A simple C program that prints
 * comma seperated numbers from 0 to 9
 *
 * Return: 0
 */

int main(void)
{
	int num = 0;

	for (; num <= 9; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}

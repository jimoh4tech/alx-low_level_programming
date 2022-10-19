#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A simple C program that prints
 * comma seperated combinations from 00 to 89
 *
 * Return: 0
 */

int main(void)
{
	int num1 = 0;

	for (; num1 <= 9; num1++)
	{
		int num2 = 0;

		for (; num2 <= 9; num2++)
		{
			if (num1 != num2 && num1 < num2)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				if (num1 != 8 || num2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}

	}
	putchar('\n');
	return (0);
}

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

	for (; num1 <= 99; num1++)
	{
	int num2 = num1;

		for (; num2 <= 99; num2++)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');
				putchar(' ');
				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');
					if (num1 != 98 || num2 != 99)
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

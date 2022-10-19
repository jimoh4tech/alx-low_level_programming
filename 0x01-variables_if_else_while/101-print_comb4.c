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
			int num3 = 0;

			for (; num3 <= 9; num3++)
			{
				if (num1 != num2 && num2 != num3 && num1 < num2 && num2 < num3)
				{
					putchar(num1 + '0');
					putchar(num2 + '0');
					putchar(num3 + '0');
					if (num1 != 7 || num2 != 8 || num3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

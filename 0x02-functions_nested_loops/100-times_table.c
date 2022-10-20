#include"main.h"

/**
 * print_times_table - function to print times table
 *
 * @n: n of type int
 */

void print_times_table(int n)
{
	int i, j, temp;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(0 + '0');

			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');
				temp = i * j;

				if (temp < 10)
					_putchar(' ');
				if (temp < 100)
					_putchar(' ');

				if (temp >= 100)
				{
					_putchar((temp / 100) + '0');
					_putchar((temp / 10) % 10 + '0');
				}
				else if (temp >= 10 && temp < 100)
					_putchar((temp / 10) + '0');

				_putchar((temp % 10) + '0');

			}
			_putchar('\n');
		}
	}
}

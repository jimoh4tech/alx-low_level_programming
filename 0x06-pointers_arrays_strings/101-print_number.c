#include"main.h"

/**
 * print_number - function to print the exact number
 *
 * @n: n of type int
 */

void print_number(int n)
{
	unsigned int digit = n;

	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		digit = -digit;
	}

	/* recursively print the first few digits*/
	if ((digit / 10) > 0)
		print_number(digit / 10);

	_putchar((digit % 10) + '0');
}

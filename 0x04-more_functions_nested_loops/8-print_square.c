#include"main.h"

/**
 * print_square - function that print # in squares
 *
 * @n: number of slash to print
 */

void print_square(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
_putchar('#');

_putchar('\n');
}

if (n < 1)
_putchar('\n');
}

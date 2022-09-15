#include"main.h"

/**
 * print_diagonal - function that print diagonal slash(/)
 *
 * @n: number of slash to print
 */

void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
_putchar(' ');

_putchar('\\');
_putchar('\n');
}

if (n < 1)
_putchar('\n');
}

#include"main.h"

/**
 * print_triangle - function that print # in triangle form
 *
 * @size: size of triangle
 */

void print_triangle(int size)
{
int i, j, k, count = 1;
for (i = size; i > 0; i--)
{
for (j = 0; j < size - count; j++)
_putchar(' ');

for (k = 0; k < count; k++)
_putchar('#');
++count;
_putchar('\n');
}

if (size < 1)
_putchar('\n');
}

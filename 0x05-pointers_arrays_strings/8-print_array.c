#include<stdio.h>

/**
 * print_array - funtion that prints the content of array
 * @a: address of the array
 * @n: the length of the array
 */

void print_array(int *a, int n)
{
int i;
for (i = 0; i < n - 1; i++)
printf("%d, ", a[i]);
printf("%d\n", a[n - 1]);
}

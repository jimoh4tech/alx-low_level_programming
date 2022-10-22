#include<stdio.h>

/**
 * print_array - funtion that prints the content of array
 * @a: address of the array
 * @n: the length of the array
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}

#include"main.h"

/**
 * print_to_98 - funtion to print to 98 in ascending r descending order
 *
 * @n: n of type integer
 */

void print_to_98(int n)
{
	int num;

	if (n <= 98)
	{
		for (num = n; num < 98; num++)
			printf("%d, ", num);
	}
	else
	{
		for (num = n; num > 98; num--)
			printf("%d, ", num);
	}
	printf("98\n");
}

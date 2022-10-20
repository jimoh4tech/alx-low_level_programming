#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print the sum of the
 * multiples of 3 and 5 les than 1024
 *
 * Return: 0
 */

int main(void)
{
	int num, total = 0;

	for (num = 1; num < 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			total += num;
	}
	printf("%d\n", total);

	return (0);
}

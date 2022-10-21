#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sums any length of args
 * @n: length of the args
 *
 * Return: 0 if n is 0, else sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}

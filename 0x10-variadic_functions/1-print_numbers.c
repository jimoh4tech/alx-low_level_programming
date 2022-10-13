#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints seperated numbers
 * @separator: pointer to the seperator
 * @n: length of the args
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list nums;

if (n != 0)
{
va_start(nums, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(nums, int));
if (separator && i != (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(nums);
}
}

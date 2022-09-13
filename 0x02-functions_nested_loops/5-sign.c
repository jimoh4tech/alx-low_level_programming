#include"main.h"

/**
 * print_sign - a funtion to determine the sign of an integer
 *
 * @n: number of type int
 *
 * Return: 1 if positive, 0 if zero, and -1 if negative
 */

int print_sign(int n)
{
if (n > 0)
return (1);
else if (n == 0)
return (0);
else
return (-1);
}

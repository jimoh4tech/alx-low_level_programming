#include "main.h"

/**
 * check_prime - checks if a number is prime
 * @n: number to be checked
 * @i: average of @n
 * Return: 1 if prime, else 0
 */

int check_prime(int n, int i)
{
if (i == 1)
return (1);
else
{
if (n % i == 0)
return (0);
else
return (check_prime(n, i - 1));
}
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to be checked
 * Return: 1 if prime, else 0
 */

int is_prime_number(int n)
{
int check;
if (n < 2)
return (0);
check = check_prime(n, (n / 2));
return (check);
}

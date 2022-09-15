#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - a program that finds the prime factores of prime numbers
 *
 * Return: 0
 */

int main(void)
{
long prime = 612852475143;
int i;
for (i = 2; i < prime; i++)
{
if (prime % i == 0)
{
printf("%d, ", i);
prime /= i;
i--;
}

}
printf("%d\n", i);
return (0);
}

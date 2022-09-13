#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A program to print first 50 fibonacci
 *
 * Return: 0
 */

int main(void)
{
int c = 1;
unsigned long f = 1, s = 2, temp = 0;
printf("%lu, %lu", f, s);
do {
printf(", ");
temp = s;
s += f;
printf("%lu", s);
f = temp;
c++;
} while (c < 49);
printf("\n");
return (0);
}

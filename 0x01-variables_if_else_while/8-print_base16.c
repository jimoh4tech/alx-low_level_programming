#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: A simple C program that prints all hexademical numbers
 *
 * Return: 0
 */

int main(void)
{

char num = '0';
char letter = 'a';

for (; num <= '9';)
{
putchar(num);
++num;
}

for (; letter <= 'f';)
{
putchar(letter);
++letter;
}

putchar('\n');

return (0);
}

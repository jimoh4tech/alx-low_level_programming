#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: A simple C program that prints all in aplhabets in lower case
 *
 * Return: 0
 */

int main(void)
{
char letter = 'a';

for (; letter <= 'z';)
{

if (letter != 'e' && letter != 'q')
putchar(letter);
++letter;
}
putchar('\n');
return (0);
}

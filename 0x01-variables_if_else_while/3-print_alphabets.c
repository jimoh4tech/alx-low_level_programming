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
	char LETTER = 'A';

	for (; letter <= 'z';)
	{
		putchar(letter);
		++letter;
	}

	for (; LETTER <= 'Z';)
	{
		putchar(LETTER);
		++LETTER;
	}

	putchar('\n');
	return (0);
}

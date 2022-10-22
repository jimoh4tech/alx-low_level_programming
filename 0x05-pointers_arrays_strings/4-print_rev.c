#include"main.h"

/**
 * print_rev - function that prints the characters in a given address
 * in reverse
 * @s: address of the character sequence
 */

void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;

	while (len > 0)
	{
		len--;
		_putchar(s[len]);
	}
	_putchar('\n');
}

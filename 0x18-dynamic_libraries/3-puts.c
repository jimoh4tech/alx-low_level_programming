#include"main.h"

/**
 * _puts - function that prints the characters in a given address
 * @str: address of the character sequence
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

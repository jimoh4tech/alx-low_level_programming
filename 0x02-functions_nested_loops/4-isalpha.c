#include"main.h"

/**
 * _isalpha - function that checks if a character is alphabet
 *
 * @c: takes argument of type int
 *
 * Return: 1 if is alphabet else 0
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}

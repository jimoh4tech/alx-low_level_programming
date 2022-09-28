#include "main.h"

/**
 * _strlen_recursion - calculate the length of a string
 * @s: address of the string
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{
if (*s != '\0')
return (1 + _strlen_recursion(s + 1));
else
return (0);
}

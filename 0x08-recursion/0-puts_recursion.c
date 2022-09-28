#include "main.h"

/**
 * _puts_recursion - prints character sequence recursively
 * @s: address of the character sequence
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s++);
_puts_recursion(s);
}

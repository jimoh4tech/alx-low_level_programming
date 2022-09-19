#include"main.h"

/**
 * puts2 - function that character sequence by
 * skipping subsequent ones.
 * @str: address of the character sequence
 */

void puts2(char *str)
{
int len;

for (len = 0; str[len] != '\0'; len += 2)
_putchar(str[len]);
_putchar('\n');
}

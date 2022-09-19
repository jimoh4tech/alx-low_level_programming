#include"main.h"

/**
 * puts_half - function that prints half of character sequence
 * @str: address of the character sequence
 */

void puts_half(char *str)
{
int len, n;

for (len = 0; str[len] != '\0'; len++)
;
for (n = (len / 2); n < len; n++)
_putchar(str[n]);
_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * is_palindrome - check if @s is palindrome
 * @s: address of the string
 * Return: 1 if palindrome, else 0
 */

int is_palindrome(char *s)
{
int len = strlen(s);
int i;
for (i = 0; i < (len / 2); i++)
if (s[i] != s[len - i - 1])
return (0);
return (1);
}

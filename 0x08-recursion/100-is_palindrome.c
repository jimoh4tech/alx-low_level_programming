#include "main.h"
#include <string.h>

/**
* check_pal - check if @s is palindrome
* @s: address of the string
* @l: length of the string
* @i: current index
*
 Return: 1 if palindrome, else 0
*/

int check_pal(char *s, int l, int i)
{
if (i > (l / 2))
return (1);
else if (s[i] != s[l - i - 1])
return (0);
else
return (check_pal(s, l, i + 1));

}

/**
* is_palindrome - check if @s is palindrome
* @s: address of the string
* Return: 1 if palindrome, else 0
*/
int is_palindrome(char *s)
{
int len = strlen(s);
int pal;
pal = check_pal(s, len, 0);
return (pal);
}

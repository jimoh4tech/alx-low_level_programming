#include <stdlib.h>
#include <stddef.h>

/**
 * str_concat - concatenates two strings together
 * @s1: address of the first string
 * @s2: address of the second string
 *
 * Return: NUll if both are NULL, else pointer to the concatenation
 */

char *str_concat(char *s1, char *s2)
{
char *s;
int i, j;

if (s1 == NULL && s2 == NULL)
return (NULL);

s = malloc(sizeof(s1) + sizeof(s2));

if (s1 != NULL)
for (i = 0; s1[i] != '\0'; i++)
s[i] = s1[i];

if (s2 != NULL)
for (j = 0; s2[j] != '\0'; j++, i++)
s[i] = s2[j];

s[i] = '\0';

return (s);
}

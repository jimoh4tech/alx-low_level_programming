#include <stdlib.h>
#include <stddef.h>
#include <string.h>

/**
 * argstostr - coverts arguments to string using \n as delimiter
 * @ac: length of the array
 * @av: address of the array
 *
 * Return: pointer to the string
 */

char *argstostr(int ac, char **av)
{
char *s;
int i, j = 0, s_len = 0, c = 0;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
s_len += strlen(av[i]);

s = malloc(sizeof(char) * s_len + (1 + ac));

if (s == NULL)
{
free(s);
return (NULL);
}

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++, c++)
s[c] = av[i][j];

s[c] = '\n';
++c;
}
s[c] = '\0';
return (s);
}

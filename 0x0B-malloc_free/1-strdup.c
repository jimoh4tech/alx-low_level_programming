#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - copies a str and return the memory location
 * @str: address of the string to copy
 *
 * Return: NULL if @str is NULL, else pointer to new string
 */

char *_strdup(char *str)
{
	char *s;
	int i, len;

	if (str == NULL)
		return (NULL);

	len = strlen(str);

	s = malloc(sizeof(char) * (len + 1));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		s[i] = str[i];

	s[i] = '\0';

	return (s);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate @s1 and @n length of @s2
 * @s1: address of the first string
 * @s2: address of the second string
 * @n: size of @s2 to copy
 *
 * Return: the address of concantenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	s2 = "";

	if (n >= strlen(s2))
		s = malloc(sizeof(char) * (sizeof(s1) + strlen(s1)));
	else
		s = malloc(sizeof(char) * (sizeof(s1) + n));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];

	for (j = 0; s2[j] != '\0' && j < n; j++, i++)
		s[i] = s2[j];

	s[i] = '\0';

	return (s);
}

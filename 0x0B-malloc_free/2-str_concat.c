#include <stdlib.h>
#include <stddef.h>
#include <string.h>

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
	int i = 0, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			s[i] = s1[i];

	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++, i++)
			s[i] = s2[j];

	s[i] = '\0';

	return (s);
}

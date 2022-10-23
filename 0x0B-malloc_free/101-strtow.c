#include <stdlib.h>
#include <stddef.h>

/**
 * _wcount - counts number of words
 * @str: address of the string
 *
 * Return: number of words
 */
int _wcount(char *str)
{
	int i, c = 0;

	for (i = 0; str[i] != '\0'; i++)
		if ((str[i] != ' ' && str[i - 1] == ' ') || (i == 0 && str[0] != ' '))
			++c;

	return (c);
}
/**
 * _trspace - Moves adress to remove trailig whitespaces
 * @str: string
 *
 * Return: Pointer
 */
char *_trspace(char *str)
{
	while (*str == ' ')
		str++;
	return (str);
}
/**
 * strtow - splits a string into words
 * @str: string
 *
 * Return: Double Pointer
 */
char **strtow(char *str)
{
	char **s, *tmp;
	int l, l2, wc, i, j, fr, k;

	if (str == NULL || *str == 0)
		return (NULL);
	fr = 0;
	wc = _wcount(str);
	if (wc == 0)
		return (NULL);
	s = malloc((wc + 1) * sizeof(char *));
	if (s == NULL)
		return (NULL);
	tmp = _trspace(str);
	for (i = 0; i < wc; i++)
	{
		l = 0;
		while (*(tmp + l) != ' ' && *(tmp + l) != 0)
			l++;
		s[i] = malloc((l + 1) * sizeof(char));
		if (s[i] == 0)
		{
			fr = 1;
			break;
		}
		for (j = 0, l2 = 0; l2 < l; l2++, j++)
			s[i][j] = *(tmp + l2);
		s[i][j] = '\0';
		tmp = _trspace(tmp + l);
	}
	s[i] = NULL;
	if (fr == 1)
	{
		for (k = 0; k <= i; k++)
			free(s[k]);
		free(s);
	}
	return (s);
}

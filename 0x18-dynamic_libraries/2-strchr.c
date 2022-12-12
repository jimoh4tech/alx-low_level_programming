/**
 * _strchr - return the pointer to the first occurence of @c
 * @s: address of the string
 * @c: character to search for
 * Return: return the pointer or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}

/**
 * _strpbrk - locates the first occurrence in the
 * string @s of any of the bytes in the string accept
 * @s: address of the string
 * @accept: address of the prefix
 * Return: a pointer to the byte in @s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j, min = -1;

	for (i = 0; accept[i] != '\0'; i++)
	{
		j = 0;
		while (s[j] != accept[i] && s[j] != '\0')
			++j;
		if (s[j] == accept[i] && min <= 0)
			min = j;
		if (j < min)
			min = j;
	}
	if (min < 0)
		return ('\0');
	for (i = 0; i < min; i++)
		++s;
	return (s);
}

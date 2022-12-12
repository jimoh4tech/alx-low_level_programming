/**
 * _strncat - function to concat two strings
 * @dest: The address of the destination string
 * @src: Address of the source string
 * @n: length to be copied from @src
 * Return: Return the pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

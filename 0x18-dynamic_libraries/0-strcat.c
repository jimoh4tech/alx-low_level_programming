/**
 * _strcat - function to concat two strings
 * @dest: The address of the destination string
 * @src: Address of the source string
 * Return: Return the pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

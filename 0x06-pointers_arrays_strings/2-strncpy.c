/**
 * _strncpy - function to copy from @src to @dest
 * @dest: The address of the destination string
 * @src: Address of the source string
 * @n: length of src to be copied
 * Return: Return the pointer to @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];

	for (; j < n; j++)
		dest[j] = '\0';

	return (dest);
}

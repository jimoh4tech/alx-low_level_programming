/**
 * _memcpy - copy first @n byte from @src to @dest.
 * @dest: Address of the destinaton bytes array.
 * @src: Address of the source bytes array.
 * @n: size of the bytes to be filled
 * Return: the pointer to @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];

return (dest);
}

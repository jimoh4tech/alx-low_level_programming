/**
 * _memset - fill the first @n byte of @s with @b.
 * @s: Address of the bytes array.
 * @b: Byte to fill with.
 * @n: size of the bytes to be filled
 * Return: the pointer to @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;

return (s);
}

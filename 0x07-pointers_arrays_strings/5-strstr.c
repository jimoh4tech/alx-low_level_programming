/**
 * compare - the value in two addreses
 * @a: address of the first string
 * @b: address of the second string
 * Return: integer value
 */

int compare(const char *a, const char *b)
{
while (*a && *b)
{
if (*a != *b)
{
return (0);
}

a++;
b++;
}
return (*b == '\0');
}

/**
 * _strstr - function finds the first occurrence of the substring
 * @needle in the string @haystack
 * @haystack: address of the string
 * @needle: address of the substring
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
if ((*haystack == *needle) && compare(haystack, needle))
{
return (haystack);
}
haystack++;
}

return (NULL);
}

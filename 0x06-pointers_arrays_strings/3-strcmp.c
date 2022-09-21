/**
 * _strcmp - function to compare @s1 and @s2
 * @s1: The address of the first string
 * @s2: Address of the second string
 * Return: lenght of their differnces
 */

int *_strcmp(char *s1, char *s2)
{
int cmp = 0;

while (*s1 != '\0')
{
if (*s1 != *s2)
{
cmp = s1[0] - s2[0];
break;
}
*s1++;
*s2++;
}

return (cmp);
}

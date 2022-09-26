/**
 * _strspn - return the length of the intial prefix
 * @s: address of the string
 * @accept: address of the prefix
 * Return: the length
 */

int _strspn(char *s, char *accept)
{
int i, j,  c = 0;
for (i = 0; s[i] != '\0'; i++)
{
j = 0;
while (accept[j] != s[i] && accept[j] != '\0')
++j;

if (accept[j] == s[i])
++c;
else
break;
}
return (c);
}

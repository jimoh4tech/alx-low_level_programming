/**
 * _atoi - funtion that extract numbers from string
 * @s: address of the string
 * Return: The number extracted
 */

int _atoi(char *s)
{
int i, n = 0, sign = 0;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= '0' && s[i] <= '9')
{
if (s[i - 1] == 45)
sign = 1;
n = n * 10 + (s[i] - 48);
if (s[i + 1] < '0' || s[i + 1] > '9')
break;
}
}

if (sign == 1)
n *= -1;
return (n);
}

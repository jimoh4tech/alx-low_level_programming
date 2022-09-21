/**
 * cap_string - funtion that capital string
 * @s: Address of the string
 * Return: The uppercase @s address
 */

char *cap_string(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] == '\ ' || s[i] == '\t' || s[i] == '\n' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!' ||
s[i] == '?' || s[i] == '"' || s[i] == '(' || s[i] == ')' ||
s[i] == '{' || s[i] == '}') && (s[i + 1] >= 97 && s[i + 1] <= 122))
s[i + 1] -= 32;
}
return (s);
}
